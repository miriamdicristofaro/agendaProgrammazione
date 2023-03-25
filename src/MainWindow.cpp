//
// Created by miriam on 07/12/22.
//

#include "MainWindow.h"
#include "ActivityController.h"
#include<QStringList>
#include<QLineEdit>
#include<QDir>
#include<QInputDialog>
#include<QMessageBox>

MainWindow::MainWindow(std::shared_ptr<Board> b, std::shared_ptr<BoardController> bc) : board(b), boardController(bc){
    setWindowTitle("Agenda");
    std::shared_ptr<ActivityController> ac(new ActivityController(board->getActivities().at(0)));
    aw = new ActivityWidget(board->getActivities().at(0), ac, board);
    impAct = board->getActivities().at(0);

    if(board->getActivities().size() >= 2){ //if there are more than one list, the second lsit is taken as counter list
        act = board->getActivities().at(1);
        act->attach(this);
    }

    listWidget = new QListWidget;
    addButton = new QPushButton("Add Activity ");
    removeButton = new QPushButton("Remove Activity ");
    mainWid = new QWidget;
    leftLayout = new QVBoxLayout;
    mainLayout = new QHBoxLayout;

    board->attach(this);
    impAct->attach(this);

    setupUI();
    setupListeners();
}

MainWindow::~MainWindow(){
    board->detach(this);
    if(act != nullptr){
        act->detach(this);
    }
    impAct->detach(this);
}

/**
	Method that set up the listeners, in order to use the GUI
*/
void MainWindow::setupListeners(){
    connect(addButton, SIGNAL (released()), this, SLOT (handleAddButton()));
    connect(removeButton, SIGNAL (released()), this, SLOT (handleRemoveButton()));
    connect(listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem *)), this, SLOT(handleChangeSelectedItem(QListWidgetItem *)));
}

/**
	The following methods allow to handle the action displayed by the buttons
*/
void MainWindow::handleAddButton(){
    bool ok;
    QString text = QInputDialog::getText(mainWid, tr("Adding a Activity - I"),
                                         tr("Activity name:"), QLineEdit::Normal,
                                         QDir::home().dirName(), &ok);
    if (ok && !text.isEmpty() && !text.contains("(")){
        std::string name = text.toUtf8().constData();
        text = QInputDialog::getText(mainWid, tr("Adding a Activity - II"),
                                     tr("Activity Description:"), QLineEdit::Normal,
                                     QDir::home().dirName(), &ok);
        std::string desc = text.toUtf8().constData();
        std::shared_ptr<Activity> ptr( new Activity(name, desc) );
        boardController->addActivity(ptr);
        if(board->getActivities().size() == 2){ //if the new activity is the second, then it's taken as counter list
            act = ptr;
        }
    }
}


void MainWindow::handleRemoveButton(){
    if(listWidget->selectedItems().size() > 0){
        QListWidgetItem * selectedItem = listWidget->selectedItems().at(0);
        std::string selected = selectedItem->text().toUtf8().constData();
        selected = selected.substr(0, selected.find('('));
        if(selected != ("Important Tasks")){
            aw->setActivity(impAct);
            act->detach(this);
            boardController->removeActivity(selected);
        }else{
            QMessageBox::about(this, "Impossible delete Activity ", "Impossible delete this Activity ");
        }
    }
}

void MainWindow::handleChangeSelectedItem(QListWidgetItem * item){
    std::string selected = item->text().toUtf8().constData();
    selected = selected.substr(0, selected.find('('));
    for(auto it : board->getActivities()){
        if(it->getName() == selected){
            aw->setActivity(it);
            if(selected != "Important Tasks"){
                act->detach(this);
                act = it;
                act ->attach(this);
            }
            break;
        }
    }
}

void MainWindow::closeEvent (QCloseEvent *event){
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, tr("Agenda"),
                                                                tr("Are you sure?\n"),
                                                                QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {
        event->ignore();
    } else {
        boardController->onClose();
        event->accept();
    }
}

/**
	Method that allows to set up the graphical components
*/
void MainWindow::setupUI(){
    this->resize( 1500, 500 );
    createActivity();

    leftLayout->addWidget(listWidget);
    leftLayout->addWidget(addButton);
    leftLayout->addWidget(removeButton);
    mainLayout->addLayout(leftLayout);
    mainLayout->addWidget(aw);
    mainWid->setLayout(mainLayout);
    this->setCentralWidget(mainWid);
}

void MainWindow::update(){
    createActivity();
}

/**
	Method that allows to create the list which contains all the Activity names
*/
void MainWindow::createActivity(){
    listWidget->clear();
    for(auto it : board->getActivities()){
        std::string s = it->getName();
        s+="(";
        s+=std::to_string(it->getSubActivities().size());
        s+=")";
        listWidget->addItem( QString::fromStdString(s) );
    }
}
