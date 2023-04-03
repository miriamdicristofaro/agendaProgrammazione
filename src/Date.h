//
// Created by miriam on 07/12/22.
//

#ifndef AGENDAPROGRAMMAZIONE_DATE_H
#define AGENDAPROGRAMMAZIONE_DATE_H
#include <ostream>

class Date {
public:
    explicit Date(int aDay, int aMonth, int aYear) noexcept;
    virtual ~Date() {};
    static Date today();
    static Date fromString(std::string str);
    std::string toString() const;
    bool operator < (const Date& right) const;
    bool operator == (const Date& right) const;


private:
    short unsigned int day;
    short unsigned int month;
    short unsigned int year;
    int getMaxDays(int year);
};

#endif //AGENDAPROGRAMMAZIONE_DATE_H
