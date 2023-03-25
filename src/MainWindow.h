//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_MAINWINDOW_H
#define AGENDAPROGRAMMAZIONE_MAINWINDOW_H

#include <vector>
#include <memory>

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QListWidget>
#include <QCloseEvent>
#include <QBoxLayout>

#include "Board.h"
#include "BoardController.h"
#include "ActivityWidget.h"
#include "Observer.h"

class MainWindow : public QMainWindow, Observer{
    Q_OBJECT
public:
    MainWindow(std::shared_ptr<Board> b, std::shared_ptr<BoardController> bc);
    ~MainWindow();

    virtual void closeEvent (QCloseEvent *event) override;
    virtual void update() override;
private slots:
    void handleAddButton();
    void handleRemoveButton();
    void handleChangeSelectedItem(QListWidgetItem * item);
private:
    void setupUI();
    void createActivity();
    void setupListeners();

    ActivityWidget *aw;
    QListWidget *listWidget;
    QPushButton *addButton;
    QPushButton *removeButton;
    QWidget *mainWid;
    QVBoxLayout* leftLayout;
    QHBoxLayout* mainLayout;

    std::shared_ptr<Board> board;
    std::shared_ptr<Activity> act;
    std::shared_ptr<Activity> impAct;
    std::shared_ptr<BoardController> boardController;

};


#endif //AGENDAPROGRAMMAZIONE_MAINWINDOW_H
