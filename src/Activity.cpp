//
// Created by miriam on 07/12/22.
//

#include <algorithm>
#include "Activity.h"

Activity::Activity(std::string n, std::string desc):
        name(n), description(desc), observers(){
    std::map<Date, SubActivity> subactivities;
}

void Activity::addSubActivity(SubActivity toAdd) {
    if(std::none_of(subactivities.begin(), subactivities.end(),
                    [&toAdd](const std::pair<Date, SubActivity>& s)
                    { return s.second == toAdd; }))
    {
        subactivities.insert(std::make_pair (toAdd.getStartDate(), toAdd) );
        this->notify();
    }
}
void Activity::removeSubActivity(SubActivity toDelete){
    bool found = false;
    for(auto i = subactivities.equal_range(toDelete.getStartDate()).first; i != subactivities.equal_range(toDelete.getStartDate()).second && !found; i++){
        if(i->second == toDelete){
            subactivities.erase(i);
            found = true;
            break;
        }
    }
    this->notify();
}

bool Activity::operator == (const Activity& right) const{
    return (description == right.description) && (name == right.name);
}
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
const std::map<Date, SubActivity>& Activity::getAllSubActivities() const {
    return subactivities;
}
const std::string& Activity::getDescription() const {
    return description;
}
const std::string& Activity::getName() const {
    return name;
}
Activity::~Activity() {
    for(auto o : observers){
        delete o;
    }
}