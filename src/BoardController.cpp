//
// Created by 164291 on 11/03/2023.
//

#include<iostream>

#include "BoardController.h"

void BoardController::addActivity(std::shared_ptr<Activity> a){
    board->addActivity(a);
}

void BoardController::removeActivity(std::string aName){
    board->removeActivity(aName);
}

void BoardController::onClose(){
    board->save();
}