//
// Created by 164291 on 25/02/2023.
//

#ifndef AGENDAPROGRAMMAZIONE_MASTER_ACTIVITYCONTROLLER_H
#define AGENDAPROGRAMMAZIONE_MASTER_ACTIVITYCONTROLLER_H

#include<memory>

#include "Activity.h"
#include "SubActivity.h"


class ActivityController {

    public:
        ActivityController(std::shared_ptr<Activity> a) : activity(a) { };
        ~ActivityController() = default;

        void add(SubActivity s);
        void remove(SubActivity s);
        void setActivity(std::shared_ptr<Activity> a);

    private:
        std::shared_ptr<Activity> activity;
};



#endif //AGENDAPROGRAMMAZIONE_MASTER_ACTIVITYCONTROLLER_H

