//
// Created by miriam on 17/02/23.
//

#ifndef AGENDAPROGRAMMAZIONE_SUBACTIVITYDIALOG_H
#define AGENDAPROGRAMMAZIONE_SUBACTIVITYDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QDialogButtonBox>
#include <QCalendarWidget>
#include <QGridLayout>
#include <QRegExpValidator>
#include <QLineEdit>

#include "SubActivity.h"

class SubActivityDialog : public QDialog{
    Q_OBJECT

public:
    SubActivityDialog(QWidget *parent);
    ~SubActivityDialog();
    SubActivity getInsertedSubActivity();

public slots:
    void verify();
    void help();
private:
    void setupUi();
    void setupListeners();

    QLabel *noteLabel;
    QLabel *startLabel;
    QLabel *endLabel;
    QLabel *startTimeLabel;
    QLabel *endTimeLabel;
    QDialogButtonBox *buttonBox;

    QLineEdit *noteEdit;
    QCalendarWidget *startCal;
    QCalendarWidget *endCal;
    QLineEdit *startTimeEdit;
    QLineEdit *endTimeEdit;
    QRegExpValidator *dateValidator;
    SubActivity toReturn;
};

#endif //AGENDAPROGRAMMAZIONE_SUBACTIVITYDIALOG_H
