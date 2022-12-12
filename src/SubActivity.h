//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_SUBACTIVITY_H
#define AGENDAPROGRAMMAZIONE_SUBACTIVITY_H


class SubActivity {
public:
    SubActivity();
private:
    std::string name;
    std::string description;
    Date startDate;
    Date endDate;
    Time startTime;
    Time endTime;
    std::string subActivityCompleted;

};


#endif //AGENDAPROGRAMMAZIONE_SUBACTIVITY_H
