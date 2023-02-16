//
// Created by miriam on 07/12/22.
//

#include "Activity.h"

Activity::Activity() {}

void Activity::attach(Observer * o){
    observers.push_back( o );
}
void Activity::detach(Observer * o){
    observers.remove( o );
}
void Activity::notify() const{
    for(auto o : observers){
        o->update();
    }
}
Activity::~Activity() {
    for(auto o : observers){
        delete o;
    }
}