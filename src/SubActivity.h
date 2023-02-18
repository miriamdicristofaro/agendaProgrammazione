//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_SUBACTIVITY_H
#define AGENDAPROGRAMMAZIONE_SUBACTIVITY_H

#include "Date.h"
#include "Time.h"

class SubActivity {
public:
    SubActivity(std::string name, std::string description, Date startDate, Date endDate, Time startTime, Time endTime, std::string note)throw (std::runtime_error);
    ~SubActivity();
    bool operator == (const SubActivity& right) const;
    const Date& getStartDate() const;
    const Time& getStartTime() const;
    const Date& getEndDate() const;
    const Time& getEndTime() const;
private:
    std::string name;
    std::string description;
    Date startDate;
    Date endDate;
    Time startTime;
    Time endTime;
    std::string notes;
    std::string subActivityCompleted;

};


#endif //AGENDAPROGRAMMAZIONE_SUBACTIVITY_H
