//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_ACTIVITY_H
#define AGENDAPROGRAMMAZIONE_ACTIVITY_H

#include "Date.h"
#include "SubActivity.h"
#include "map"
#include "list"
#include "Observer.h"
#include "Subject.h"

class Activity : public Subject{
public:
    Activity(std::string n, std::string desc);
    virtual ~Activity();

    void addSubActivity(SubActivity toAdd);
    void removeSubActivity(SubActivity toDelete);
    const std::string& getDescription() const;
    const std::string& getName() const;
    const std::map<Date, SubActivity>& getSubActivities() const;
    bool operator == (const Activity& right) const;
    virtual void attach(Observer * o) override;
    virtual void detach(Observer * o) override;
    virtual void notify() const  override;
private:
    std::string name;
    std::string description;
    std::map<Date, SubActivity> subactivities;
    std::list < Observer* > observers;

};


#endif //AGENDAPROGRAMMAZIONE_ACTIVITY_H