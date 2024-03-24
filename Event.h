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
private:
    unsigned int id;
    std::string title;
    float price;
    unsigned int numTickets;
    Location location;
    Date date;
    EventAgeGroup group;

public:
    Event(unsigned int eventId, const std::string &eventName, float eventPrice, unsigned int tickets,
          const Location &eventLocation, const Date &eventDate, EventAgeGroup eventGroup);

    // Getters
    unsigned int getId() const;

    std::string getTitle() const;

    float getPrice() const;

    unsigned int getNumTickets() const;

    Location getLocation() const;

    Date getDate() const;

    EventAgeGroup getGroup() const;

    // Setters
    void setId(unsigned int eventId);

    void setTitle(const std::string &eventName);

    void setPrice(float eventPrice);

    void setNumTickets(unsigned int tickets);

    void setLocation(const Location &eventLocation);

    void setDate(const Date &eventDate);

    void setGroup(EventAgeGroup eventGroup);

    //Metode
    std::string to_string() const;

    void print() const;

    bool sellTicket();

};

#endif //NALOGA2_EVENT_H
