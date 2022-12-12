//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_ACTIVITY_H
#define AGENDAPROGRAMMAZIONE_ACTIVITY_H


class Activity {
public:
    Activity();
private:
    std::string name;
    std::string description;
    std::map<Date, subActivity>;

};


#endif //AGENDAPROGRAMMAZIONE_ACTIVITY_H
