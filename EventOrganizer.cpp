//
// Created by Cverle on 24/03/2024.
//
#include "algorithm"
#include "EventOrganizer.h"


EventOrganizer::EventOrganizer(const std::string &name, const std::string &webAddress)
        : name(name), webAddress(webAddress) {}
EventOrganizer::~EventOrganizer() {
    for (Event* event : events) {
        delete event;
    }
}

void EventOrganizer::addEvent(Event *event) {
    events.push_back(event);
}

void EventOrganizer::sellTicket(unsigned int eventId) {
    for (auto &event: events) {
        if (event->getId() == eventId) {
            event->sellTicket();
            return;
        }
    }
}

std::string EventOrganizer::toString() const {
    std::string organizerString = "Event Organizer: " + name + "\n";
    organizerString += "webAddress: " + webAddress + "\n";
    organizerString += "Events:\n";
    for (const Event* event: events) {
        organizerString += event->toString() + "\n";
    }
    return organizerString;
}

vector<Event*> EventOrganizer::findEventByLocation(Location *loc) const {
    vector<Event*> eventi;
    for(auto &tren:events){
        if(tren->getLocation()==loc){
            eventi.push_back(tren);
        }
    }
    return eventi;
}

void EventOrganizer::sort(bool (*f)(Event *, Event *)) {
    std::sort(events.begin(), events.end(), f);
}

