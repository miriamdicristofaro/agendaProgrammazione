//
// Created by miriam on 11/03/23.
//

#include "ActivityWidget.h"
#include "SubActivityDialog.h"
#include<QStringList>
#include<QTreeWidgetItem>
#include<QMessageBox>
#include <iostream>
/**
	Constructor of the class
	@param a: the Activity that the widget displays
	@param parent: the parent of this widget
*/
ActivityWidget::ActivityWidget(std::shared_ptr<Activity> a, std::shared_ptr<ActivityController> ac, std::shared_ptr<Board> b, QWidget *parent) : activities(a), activityController(ac), board(b), QWidget(parent){
    treeView = new QTreeWidget;
    fillTree();
    addButton = new QPushButton("Add a Subactivity");
    removeButton = new QPushButton("Remove a Subactivity");
    importantButton = new QPushButton("Add to Important Subactivity");
    titleLabel = new QLabel( QString::fromStdString( activities->getName() ) );
    descLabel = new QLabel( QString::fromStdString( activities->getDescription() ) );
    titleLabel->setAlignment(Qt::AlignCenter);
    activities->attach(this);
    setupUI();
    setupListeners();
}

/**
	Method that allows to set the Activity that is displayed
	@param al: The Activity to show
*/
void ActivityWidget::setActivity(std::shared_ptr<Activity> a){
    activities->detach(this);
    this-> activities = a;
    activityController->setActivity(a);
    activities->attach(this);
    fillTree();
    if(activities->getName() != "Important Subactivity" ){
        importantButton->setVisible(true);
    }else if(activities->getName() == "Important Subactivity" && importantButton != nullptr){
        importantButton->setVisible(false);
    }
    titleLabel->setText( QString::fromStdString( activities->getName() ) );
    descLabel->setText ( QString::fromStdString( activities->getDescription() ) );
}

/**
	Method that set up the listeners, in order to use the GUI
*/
void ActivityWidget::setupListeners(){
    connect(addButton, SIGNAL (released()), this, SLOT (handleAddButton()));
    connect(removeButton, SIGNAL (released()), this, SLOT (handleRemoveButton()));
    connect(treeView, SIGNAL(itemDoubleClicked(QTreeWidgetItem *, int)), this, SLOT(handleChangeSelectedItem(QTreeWidgetItem *, int)));
    connect(importantButton, SIGNAL(released()), this, SLOT(handleImportantButton()));
}
/**
	Method that fill the tree with the datas of the Activity's Subactivity
*/
void ActivityWidget::fillTree(){
    treeView->clear();
    treeView->setItemsExpandable(false);
    treeView->setHeaderLabels(QStringList() << "Status" << "Notes " << "Start Date" << "Start Time" << "End Date" << "End Time" );
    Date tod = Date::today();

    for(auto it : activities->getAllSubActivities() ){
        QTreeWidgetItem *treeItem = new QTreeWidgetItem();
        if(tod < it.second.getStartDate()  ){
            treeItem->setText(0,  "To do" );
            treeItem->setForeground(0, QBrush( QColor(Qt::green) ) ) ;
            treeItem->setText(1,  QString::fromStdString (it.second.getNotes()) );
            treeItem->setText(2,  QString::fromStdString (it.second.getStartDate().toString() ) );
            treeItem->setText(3,  QString::fromStdString (it.second.getStartTime().toString() ) );
            treeItem->setText(4,  QString::fromStdString (it.second.getEndDate().toString() ) );
            treeItem->setText(5,  QString::fromStdString (it.second.getEndTime().toString() ) );

            treeView->addTopLevelItem(treeItem);
        }else if (it.second.getEndDate() < tod ){
            treeItem->setText(0,  "Passed");
            treeItem->setForeground(0, QBrush( QColor(Qt::red) ) ) ;
        }else if( (it.second.getStartDate() < tod || it.second.getStartDate() == tod) && (tod < it.second.getEndDate()  || tod == it.second.getEndDate()) ){
            treeItem->setText(0, "To do now" );
            treeItem->setForeground(0, QBrush( QColor(Qt::blue) ) ) ;
            treeItem->setText(1,  QString::fromStdString (it.second.getNotes()) );
            treeItem->setText(2,  QString::fromStdString (it.second.getStartDate().toString() ) );
            treeItem->setText(3,  QString::fromStdString (it.second.getStartTime().toString() ) );
            treeItem->setText(4,  QString::fromStdString (it.second.getEndDate().toString() ) );
            treeItem->setText(5,  QString::fromStdString (it.second.getEndTime().toString() ) );

            treeView->addTopLevelItem(treeItem);
        }

    }
}
void ActivityWidget::update(){
    this->fillTree();
}
/**
	Method that allows to set up the graphical components
*/
void ActivityWidget::setupUI(){
    QVBoxLayout *mainLayout = new QVBoxLayout;
    QHBoxLayout *underLayout = new QHBoxLayout;
    mainLayout->addWidget(titleLabel);
    mainLayout->addWidget(descLabel);
    mainLayout->addWidget(treeView);
    underLayout->addWidget(addButton);
    underLayout->addWidget(removeButton);
    underLayout->addWidget(importantButton);
    importantButton->setVisible(false);
    mainLayout->addLayout(underLayout);
    this->setLayout(mainLayout);
}
ActivityWidget::~ActivityWidget(){
    activities->detach(this);
}

QSize ActivityWidget::sizeHint() const{
    return QSize(100, 110);
}
/**
	The following methods allow to handle the action displayed by the buttons
*/
void ActivityWidget::handleAddButton(){
    SubActivityDialog dialog(this);
    if(dialog.exec() == QDialog::Accepted){
        activityController->add( dialog.getInsertedSubActivity() );
    }
}
void ActivityWidget::handleRemoveButton(){
    QList <QTreeWidgetItem *> items = treeView->selectedItems();
    if(items.size() > 0){
        for(auto it : items){
            //the subactivity that will be deleted is reconstructed using the data inside the cells
            SubActivity s(
                    Date::fromString(it->text(2).toUtf8().constData() ), //start date
                    Date::fromString( it->text(4).toUtf8().constData() ), //end date
                    Time::fromString( it->text(3).toUtf8().constData() ), //start time
                    Time::fromString( it->text(5).toUtf8().constData() ), //end time
                    it->text(1).toUtf8().constData()  //notes
            );
            activityController->remove(s);
        }
    }
}

void ActivityWidget::handleChangeSelectedItem(QTreeWidgetItem * selected, int col){
    QMessageBox::about( this, "Subactivity data",
                        "Start Date: " + selected->text(1) + " <br>" +
                        "Start Time: " + selected->text(2) + " <br>" +
                        "End Date: " + selected->text(3) + " <br>" +
                        "End Time: " + selected->text(4) + " <br>" +
                        "Notes: " + selected->text(0) + " <br>"
    );
}
void ActivityWidget::handleImportantButton(){
    if(treeView->selectedItems().size() > 0) {
        QTreeWidgetItem *selected = treeView->selectedItems().at(0);
        const Date &startD = Date::fromString(selected->text(2).toUtf8().constData());
        const Date &endD = Date::fromString(selected->text(4).toUtf8().constData());
        Date tod = Date::today();
        if ((tod < startD || tod == startD) && (tod < endD || tod == endD)) {
            SubActivity s(
                    startD, //start date
                    endD, //end date
                    Time::fromString(selected->text(3).toUtf8().constData()), //start time
                    Time::fromString(selected->text(5).toUtf8().constData()), //end time
                    selected->text(1).toUtf8().constData() //notes
            );
            // adds the Subactivity to the board important subactivities
            board->getActivities().at(0)->addSubActivity(s);
        }
    }
}