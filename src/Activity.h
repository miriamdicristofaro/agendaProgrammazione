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
    Activity();
    ~Activity() override;

    void addSubActivity(SubActivity toAdd);
    void removeSubActivity(SubActivity toDelete);
    virtual void attach(Observer * o) override;
    virtual void detach(Observer * o) override;
    virtual void notify() const  override;
private:
    std::string name;
    std::string description;
    std::map<Date, SubActivity>;
    std::list < Observer* > observers;

};


#endif //AGENDAPROGRAMMAZIONE_ACTIVITY_H
