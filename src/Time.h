//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_TIME_H
#define AGENDAPROGRAMMAZIONE_TIME_H

#include <stdexcept>


class Time {
public:
    explicit Time(short unsigned int h, short unsigned int m, short unsigned int s) noexcept;
    virtual ~Time() {};
    static Time fromString(std::string str);
    std::string toString() const;

    bool operator < (const Time& right) const;
    bool operator == (const Time& right) const;
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

private:
    short unsigned int hours;
    short unsigned int minutes;
    short unsigned int seconds;
};


#endif //AGENDAPROGRAMMAZIONE_TIME_H