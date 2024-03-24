//
// Created by Cverle on 12/03/2024.
//

#ifndef NALOGA3_DATE_H
#define NALOGA3_DATE_H

#include <iostream>
#include <string>

using namespace std;


class Date {
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;


public:
    static const int MaxDayByMonth[12];
    static const int MaxMonth = 12;
    static const int DaysInYear = 365;

    static bool isValidDate(unsigned int d, unsigned int m, unsigned int y);

    Date(unsigned int day, unsigned int month, unsigned int year);

    unsigned int getDay();

    unsigned int getMonth();

    unsigned int getYear();

    void setDay(unsigned int day);

    void setMonth(unsigned int month);

    void setYear(unsigned int year);

    static bool isLeapYear(unsigned int year);

    static unsigned int getDaysInMonth(unsigned int month, unsigned int year);

    string toString();

    static unsigned int setLeapYearDays(unsigned int year);
};


#endif //NALOGA3_DATE_H
