//
// Created by miriam on 11/03/23.
//

#ifndef AGENDAPROGRAMMAZIONE_ACTIVITYWIDGET_H
#define AGENDAPROGRAMMAZIONE_ACTIVITYWIDGET_H
#include <memory>

#include <QWidget>
#include <QTreeWidget>
#include <QPushButton>
#include <QSize>
#include <QBoxLayout>
#include <QLabel>

#include "Activity.h"
#include "ActivityController.h"
#include "Board.h"

class ActivityWidget : public QWidget, Observer{
Q_OBJECT

public:
    ActivityWidget(std::shared_ptr<Activity> a, std::shared_ptr<ActivityController> ac , std::shared_ptr<Board> b, QWidget *parent = 0);
    ~ActivityWidget();
    void setActivity(std::shared_ptr<Activity> a);
    QSize sizeHint() const;
    virtual void update() override;

private slots:
    void handleAddButton();
    void handleRemoveButton();
    void handleImportantButton();
    void handleChangeSelectedItem(QTreeWidgetItem * item, int col);

private:
    void setupUI();
    void setupListeners();
    void fillTree();

    std::shared_ptr<Activity> activities;
    std::shared_ptr<ActivityController> activityController;
    std::shared_ptr<Board> board;

    QLabel* titleLabel;
    QLabel* descLabel;
    QTreeWidget* treeView;
    QPushButton* addButton;
    QPushButton* removeButton;
    QPushButton* importantButton;

};


#endif //AGENDAPROGRAMMAZIONE_ACTIVITYWIDGET_H
