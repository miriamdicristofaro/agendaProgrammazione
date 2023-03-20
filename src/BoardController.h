//
// Created by 164291 on 11/03/2023.
//

#ifndef AGENDAPROGRAMMAZIONE_MASTER_BOARDCONTROLLER_H
#define AGENDAPROGRAMMAZIONE_MASTER_BOARDCONTROLLER_H

#include<memory>
#include "Activityt.h"
#include "Board.h"

class BoardController {
public:
    BoardController(std::shared_ptr<Board> b) : board(b) { };
    ~BoardController() { }

    void addActivity(std::shared_ptr<Activity> a);
    void removeActivity(std::string a);
    void onClose();

private:
    std::shared_ptr<Board> board;

};


#endif //AGENDAPROGRAMMAZIONE_MASTER_BOARDCONTROLLER_H
