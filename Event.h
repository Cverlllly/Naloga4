#ifndef NALOGA2_EVENT_H
#define NALOGA2_EVENT_H

#include <string>
#include "Location.h"
#include "Date.h"

enum class EventAgeGroup {
    Child,
    Adult,
    Senior,
    All
};

class Event {
protected:
    unsigned int id;
    std::string title;
    float price;
    unsigned int numTickets;
    Location *location;
    Date date;
    EventAgeGroup group;

public:
    Event(unsigned int eventId, const std::string &eventName, float eventPrice, unsigned int tickets,
          Location *eventLocation, const Date &eventDate, EventAgeGroup eventGroup);

    explicit Event(unsigned int id);

    ~Event();
    // Getters
    unsigned int getId() const;

    std::string getTitle() const;

    float getPrice() const;

    unsigned int getNumTickets() const;

    Location *getLocation() const;

    Date getDate() const;

    EventAgeGroup getGroup() const;

    virtual std::string toString() const;

    void print() const;

    bool sellTicket();

};

#endif //NALOGA2_EVENT_H
