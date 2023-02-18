//
// Created by miriam on 07/12/22.
//

#include "SubActivity.h"

SubActivity::SubActivity(std::string name, std::string description, Date startD, Date endD, Time startT, Time endT, std::string note)throw (std::runtime_error) : name(name), description(description), startDate(startD), endDate(endD), startTime(startT), endTime(endT), notes(note){
    if(endD < startD){
        throw std::runtime_error("Error: end date is less than start date");
    }
    if(endT < startT && startD == endD){
        throw std::runtime_error("Error: end time is less than start time");
    }
}

bool SubActivity::operator == (const SubActivity& right) const{
    return this->startDate == right.startDate &&
           this->endDate == right.endDate &&
           this->startTime == right.startTime &&
           this->endTime == right.endTime &&
           this->notes == right.notes;
}

const Date& SubActivity::getStartDate() const {
    return startDate;
}

const Time& SubActivity::getStartTime() const {
    return startTime;
}
const Date& SubActivity::getEndDate() const {
    return endDate;
}

const Time& SubActivity::getEndTime() const {
    return endTime;
}