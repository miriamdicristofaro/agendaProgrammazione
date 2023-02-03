//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_TIME_H
#define AGENDAPROGRAMMAZIONE_TIME_H


class Time {
public:
    explicit Time(short unsigned int h, short unsigned int m, short unsigned int s) throw(std::runtime_error);
    virtual ~Time();

    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
    static Time fromString(std::string str);
    std::string toString() const;

    bool operator < (const Time& right) const;
    bool operator == (const Time& right) const;


private:
    short unsigned int hours;
    short unsigned int minutes;
    short unsigned int seconds;
};


#endif //AGENDAPROGRAMMAZIONE_TIME_H
