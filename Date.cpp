//
// Created by Cverle on 12/03/2024.
//

#include "Date.h"

unsigned int Date::getDay() {
    return day;
}

unsigned int Date::getMonth() {
    return month;
}

unsigned int Date::getYear() {
    return year;
}

const int Date::MaxDayByMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool Date::isLeapYear(unsigned int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        return true;
    } else return false;
}

unsigned int Date::setLeapYearDays(unsigned int year) {
    if (isLeapYear(year)) {
        return 29;
    }
    return MaxDayByMonth[1];
}

unsigned int Date::getDaysInMonth(unsigned int month, unsigned int year) {
    if (month == 2) {
        return setLeapYearDays(year);
    } else return MaxDayByMonth[month - 1];
}

bool Date::isValidDate(unsigned int d, unsigned int m, unsigned int y) {
    if (m > MaxMonth)return false;
    int maxDays = MaxDayByMonth[m - 1];
    if (m == 2 && isLeapYear(y)) {
        maxDays = 29;
    }
    if (d > maxDays)return false;
    return true;
}

Date::Date(unsigned int day, unsigned int month, unsigned int year) {
    if (isValidDate(day, month, year)) {
        this->day = day;
        this->month = month;
        this->year = year;
    } else {
        day = 1;
        month = 1;
        year = 1970;
    }
}

string Date::toString() {
    return to_string(day) + "." + to_string(month) + "." + to_string(year);
}



