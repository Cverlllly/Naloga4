#include "Event.h"
#include <iostream>
#include "Location.h"
#include "Date.h"
//#include "magicenum.hpp"



Event::Event(unsigned int eventId, const std::string &eventName, float eventPrice, unsigned int tickets,
             Location *eventLocation, const Date &eventDate, EventAgeGroup eventGroup)
        : id(eventId), title(eventName), price(eventPrice), numTickets(tickets),
          location(eventLocation), date(eventDate), group(eventGroup) {}
Event::~Event() {
}


// Getters
unsigned int Event::getId() const {
    return id;
}

std::string Event::getTitle() const {
    return title;
}

float Event::getPrice() const {
    return price;
}

unsigned int Event::getNumTickets() const {
    return numTickets;
}

Location *Event::getLocation() const {
    return location;
}

Date Event::getDate() const {
    return date;
}

EventAgeGroup Event::getGroup() const {
    return group;
}


void Event::print() const {
    cout << toString();
}

std::string Event::toString() const {
    std::string temp;
    std::string eventString = "Event ID: " + std::to_string(id) + "\n";
    eventString += "Title: " + title + "\n";
    eventString += "Price: " + std::to_string(price) + "\n";
    eventString += "Number of Tickets: " + std::to_string(numTickets) + "\n";
    eventString += "Location: " + location->toString() + "\n";
    eventString += "Date: " + date.toString() + "\n";
    switch (group) {
        case EventAgeGroup::Adult:
            temp = "Adult";
            break;
        case EventAgeGroup::Senior:
            temp = "Senior";
            break;
        case EventAgeGroup::All:
            temp = "All";
            break;
        case EventAgeGroup::Child:
            temp = "Child";
            break;
    }
    eventString += "Age Group: " + temp + "\n";
    return eventString;
}

bool Event::sellTicket() {
    if (numTickets > 0) {
        numTickets -= 1;
        return true;
    }
    return false;
}

Event::Event(unsigned int id) : id(id) {}



