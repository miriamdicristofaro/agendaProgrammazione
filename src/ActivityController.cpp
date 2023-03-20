
//
// Created by 164291 on 25/02/2023.
//

#include "ActivityController.h"

void ActivityController::add(SubActivity s){
    activity->addSubActivity(s);
}

void ActivityController::remove(SubActivity s){
    activity->removeSubActivity(s);
}

void ActivityController::setActivity(std::shared_ptr<Activity> a){
    this->activity = a;
}


