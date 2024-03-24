#include "Event.h"
#include <iostream>
#include "Location.h"
#include "Date.h"
//#include "magicenum.hpp"



Event::Event(unsigned int eventId, const std::string &eventName, float eventPrice, unsigned int tickets,
             const Location &eventLocation, const Date &eventDate, EventAgeGroup eventGroup)
        : id(eventId), title(eventName), price(eventPrice), numTickets(tickets),
          location(eventLocation), date(eventDate), group(eventGroup) {}

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

Location Event::getLocation() const {
    return location;
}

Date Event::getDate() const {
    return date;
}

EventAgeGroup Event::getGroup() const {
    return group;
}

// Setters
void Event::setId(unsigned int eventId) {
    id = eventId;
}

void Event::setTitle(const std::string &eventName) {
    title = eventName;
}

void Event::setPrice(float eventPrice) {
    price = eventPrice;
}

void Event::setNumTickets(unsigned int tickets) {
    numTickets = tickets;
}

void Event::setLocation(const Location &eventLocation) {
    location = eventLocation;
}

void Event::setDate(const Date &eventDate) {
    date = eventDate;
}

void Event::setGroup(EventAgeGroup eventGroup) {
    group = eventGroup;
}

void Event::print() const {
    cout << to_string();
}

std::string Event::to_string() const {
    std::string eventString = "Event ID: " + std::to_string(id) + "\n";
    eventString += "Title: " + title + "\n";
    eventString += "Price: " + std::to_string(price) + "\n";
    eventString += "Number of Tickets: " + std::to_string(numTickets) + "\n";
    eventString += "Location: " + location.toString() + "\n";
    eventString += "Date: " + date.toString() + "\n";
    eventString += "Age Group: " + std::to_string(static_cast<int> (group)) + "\n";
    return eventString;
}

bool Event::sellTicket() {
    if (numTickets > 0) {
        numTickets -= 1;
        return true;
    }
    return false;
}


