#include "Event.h"
#include <iostream>
#include "Location.h"
#include "Date.h"
#include "EventAgeGroup.h"

using namespace std;

Event::Event(int id, const std::string &name, const Date &date, const Location &location, float price, int tickets,
             EventAgeGroup age)
        : eventId(id), eventName(name), eventDate(date), eventLocation(location), ticketPrice(price),
          numTickets(tickets), ageGroup(age) {
    this->id=id;
    this->title=name;
    this->date=date;
    this->location=location;
    this->price=price;
    this->numTickets=tickets;
    this->group=age;

}

string Event::getTitle() {
    return title;
}

void Event::setTitle(string title) {
    this->title = title;
}

float Event::getPrice() {
    return price;
}

void Event::setPrice(float price) {
    this->price = price;
}

unsigned int Event::getNumTickets() {
    return numTickets;
}

void Event::setNumTickets(unsigned int numTickets) {
    this->numTickets = numTickets;
}

string Event::toString() {
    return "Event: " + title + ", Price: " + to_string(price) + ", Tickets Available: " + to_string(numTickets);
}

void Event::print() {
    cout << "Event: " << title << endl;
    cout << "Price: " << price << endl;
    cout << "Tickets Available: " << numTickets << endl;
}

