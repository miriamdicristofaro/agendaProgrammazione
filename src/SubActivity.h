//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_SUBACTIVITY_H
#define AGENDAPROGRAMMAZIONE_SUBACTIVITY_H

#include "Date.h"
#include "Time.h"
#include <list>
#include <memory>
#include <fstream>
#include <iostream>

class SubActivity {
public:
    SubActivity(Date startDate, Date endDate, Time startTime, Time endTime, std::string note) noexcept;
    ~SubActivity() {};
    bool operator == (const SubActivity& right) const;
    const Date& getStartDate() const;
    const Time& getStartTime() const;
    const Date& getEndDate() const;
    const Time& getEndTime() const;
    const std::string& getNotes() const;
    void save(std::ofstream& outfile);
    static SubActivity load(std::ifstream& infile);
private:
    Date startDate;
    Date endDate;
    Time startTime;
    Time endTime;
    std::string notes;
    std::string subActivityCompleted;

};


#endif //AGENDAPROGRAMMAZIONE_SUBACTIVITY_H
