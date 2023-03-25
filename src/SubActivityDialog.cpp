//
// Created by miriam on 17/02/23.
//
#include <QErrorMessage>
#include<QMessageBox>
#include "Time.h"
#include "Date.h"
#include "SubActivityDialog.h"

SubActivityDialog::SubActivityDialog( QWidget *parent) : QDialog(parent), toReturn(Date(1, 1, 2001), Date(2, 2, 2002), Time(3, 3, 3), Time(4, 4, 4), " " ){
    startLabel = new QLabel("Start Date of the Subactivity");
    endLabel = new QLabel("End Date of the Subactivity");
    startTimeLabel = new QLabel("Start Time of the Subactivity");
    endTimeLabel = new QLabel("End Time of the Subactivity");
    noteLabel = new QLabel("Note of the Subactivity");

    noteEdit = new QLineEdit;
    startCal = new QCalendarWidget;
    endCal = new QCalendarWidget;
    startTimeEdit = new QLineEdit;
    endTimeEdit = new QLineEdit;

    startCal->setMinimumDate(QDate(1900, 1, 1));
    startCal->setMaximumDate(QDate(3000, 1, 1));
    startCal->setGridVisible(true);
    endCal->setMinimumDate(QDate(1900, 1, 1));
    endCal->setMaximumDate(QDate(3000, 1, 1));
    endCal->setGridVisible(true);

    dateValidator = new QRegExpValidator( QRegExp("^(?:[012][0-9]):(?:[012345]\\d):?(?:[012345]\\d)?$"), this );

    startTimeEdit->setValidator(dateValidator);
    endTimeEdit->setValidator(dateValidator);

    buttonBox = new QDialogButtonBox(QDialogButtonBox::Help | QDialogButtonBox::Ok | QDialogButtonBox::Cancel);

    setupUi();
    setupListeners();
    setWindowTitle("Input a Subactivity");
}

void SubActivityDialog::verify(){
    try{
        if(noteEdit->text().isEmpty()){
            QMessageBox::warning(this, tr("Error"), tr( "The Subactivity Note is empty" ));
        }else if(startTimeEdit->text().isEmpty()){
            QMessageBox::warning(this, tr("Error"), tr( "The Start Time is empty" ));
        }else if(endTimeEdit->text().isEmpty()){
            QMessageBox::warning(this, tr("Error"), tr( "The End Time is empty" ));
        }else{
            Date start(startCal->selectedDate().day(), startCal->selectedDate().month(), startCal->selectedDate().year());
            Date end(endCal->selectedDate().day(), endCal->selectedDate().month(), endCal->selectedDate().year());
            if(startTimeEdit->text().size() == 5){
                startTimeEdit->setText(startTimeEdit->text().append(":00"));
            }
            if(endTimeEdit->text().size() == 5){
                endTimeEdit->setText(endTimeEdit->text().append(":00"));
            }
            Time startT = Time::fromString(startTimeEdit->text().toUtf8().constData());
            Time endT = Time::fromString(endTimeEdit->text().toUtf8().constData());
            std::string note = noteEdit->text().toUtf8().constData();
            SubActivity s(start, end, startT, endT, note);
            this->toReturn = s;
            accept();
            return;
        }
    }catch(std::runtime_error &e){
        std::string errorMex = "Error in some fields ";
        errorMex.append( e.what() );
        QMessageBox::warning(this, tr("Error"), QString::fromStdString(errorMex) );
    }

}

void SubActivityDialog::setupListeners(){
    connect(buttonBox, &QDialogButtonBox::accepted, this, &SubActivityDialog::verify);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &SubActivityDialog::reject);
    connect(buttonBox, &QDialogButtonBox::helpRequested, this, &SubActivityDialog::help);
}

void SubActivityDialog::setupUi(){
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(noteLabel, 1, 0);
    mainLayout->addWidget(noteEdit, 1, 1);
    mainLayout->addWidget(startLabel, 2, 0);
    mainLayout->addWidget(startCal, 2, 1);
    mainLayout->addWidget(endLabel, 3, 0);
    mainLayout->addWidget(endCal, 3, 1);
    mainLayout->addWidget(startTimeLabel, 4, 0);
    mainLayout->addWidget(startTimeEdit, 4, 1);
    mainLayout->addWidget(endTimeLabel, 5, 0);
    mainLayout->addWidget(endTimeEdit, 5, 1);
    mainLayout->addWidget(buttonBox, 6, 0, 6, 1);
    this->setLayout(mainLayout);

}

SubActivityDialog::~SubActivityDialog(){
    delete noteLabel;
    delete noteEdit;
    delete startLabel;
    delete startCal;
    delete endLabel;
    delete endCal;
    delete startTimeLabel;
    delete startTimeEdit;
    delete endTimeLabel;
    delete endTimeEdit;
    delete buttonBox;
    delete dateValidator;
}
SubActivity SubActivityDialog::getInsertedSubActivity(){
    return toReturn;
}

void SubActivityDialog::help(){
    QMessageBox::about (
            this,
            QString::fromStdString("Time input"),
            QString::fromStdString("The Time format used is \n HH:MM:SS \n ") );
}


