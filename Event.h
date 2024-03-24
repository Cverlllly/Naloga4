#ifndef NALOGA2_EVENT_H
#define NALOGA2_EVENT_H

#include <string>
#include "Location.h"
#include "Date.h"
#include "EventAgeGroup.h"

class Event {
private:
    unsigned int id;
    std::string title;
    float price;
    unsigned int numTickets;
    Location location;
    Date date;
    EventAgeGroup group;

public:
    Event(unsigned int id, std::string &title, float price, unsigned int numTickets, Location &location, Date &date,
          EventAgeGroup &group);

    std::string getTitle();

    void setTitle(std::string title);

    float getPrice();

    void setPrice(float price);

    unsigned int getNumTickets();

    void setNumTickets(unsigned int numTickets);

    std::string toString();

    void print();

    int eventId;
};

#endif //NALOGA2_EVENT_H
