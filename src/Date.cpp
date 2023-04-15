//
// Created by miriam on 07/12/22.
//

#include "Date.h"
#include <chrono>
#include <ctime>
#include <iostream>

/**
 * Class constructor
 * @param aDay: The day in the month [1, 31]
 * @param aMonth: the month in the year [1, 12 ]
 * @param aYear: the year
 */

Date::Date(int aDay, int aMonth, int aYear) noexcept{
    if(aYear < 0)
        throw std::runtime_error("Year < 0");
    if(aDay < 0)
        throw std::runtime_error("Days < 0");
    if(aMonth < 0 || aMonth > 12)
        throw std::runtime_error("Error in month number");
    this->month = aMonth;
    this->year = aYear;
    if (aDay > getMaxDays(this->year))
        throw std::runtime_error("Error in number of days");
    this->day = aDay;

}



int Date::getMaxDays(int year) {
    short unsigned int maxDay = 31;
    switch(this->month) {
        case 4: //April
        case 6: //June
        case 8: //September
        case 11: //November
            maxDay = 30;
            break;
        case 2:{
            if (year % 4 == 0){
                if (year % 100 == 0){
                    if (year % 400 == 0){
                        maxDay = 29;
                    }else{
                        maxDay = 28;
                    }
                }else{
                    maxDay = 29;
                }
            }else{
                maxDay = 28;
            }
        }
    }
    return maxDay;
}

/**
 * Static method that allows to get the today's date
 */

Date Date::today(){
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm now_tm = *std::localtime(&now_c);
    return Date(now_tm.tm_mday ,now_tm.tm_mon + 1, now_tm.tm_year + 1900);
}

Date Date::fromString(std::string str){
    std::tm t;
    strptime(str.c_str(), "%d/%m/%Y", &t);
    return Date(t.tm_mday, t.tm_mon+1, t.tm_year+1900);
}

std::string Date::toString() const{
    return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
}

bool Date::operator < (const Date& right) const{
    if ( this->year > right.year)
        return false;
    else if (this->year == right.year) {
        if (this->month > right.month)
            return false;
        else if (this->month == right.month) {
            if (this->day >= right.day)
                return false;
        }
    }
    return true;
}

bool Date::operator == (const Date& right) const{
    return this->year == right.year && this->month == right.month && this->day == right.day;
}

int Date::getDay() const{
    return this->day;
};

/**
 * Method that allows to know the month
 */
int Date::getMonth() const{
    return this->month;
};

/**
 * Method that allows to know the year
 */
int Date::getYear() const{
    return this->year;
};
void Date::setYear(int year) noexcept{
    if(this->day > getMaxDays(year))
        throw std::runtime_error("Error in day after year modify");
    this->year = year;
}