//
// Created by miriam on 07/02/22.
//

#ifndef AGENDAPROGRAMMAZIONE_BOARD_H
#define AGENDAPROGRAMMAZIONE_BOARD_H

#include <vector>
#include <list>
#include <fstream>
#include <memory>
#include "Subject.h"
#include "Observer.h"
#include "Activity.h"

class Board : public Subject{
public:
    Board();
    virtual ~Board();
    void addActivity(std::shared_ptr<Activity> a);
    void removeActivity(std::string name);
    std::vector< std::shared_ptr<Activity> > getActivities();
    void save();
    virtual void attach(Observer * o) override;
    virtual void detach(Observer * o) override;
    virtual void notify() const override;

private:
    std::list < Observer* > observers;
    std::vector< std::shared_ptr<Activity> > activitylist;
    std::ofstream outfile;

    void load();
};


#endif //AGENDAPROGRAMMAZIONE_BOARD_H
