//
// Created by Cverle on 24/03/2024.
//

#include "EventOrganizer.h"

EventOrganizer::EventOrganizer(const string &name, const std::string webAddress) {
    this->name = name;
    this->webAddress = webAddress;
}

void EventOrganizer::addEvent(const Event &event) {
    events.push_back(event);
}

void EventOrganizer::sellTicket(unsigned int eventId) {
    for (auto &event: events) {
        if (event.getId() == eventId) {
            event.sellTicket();
            return;
        }
    }
}

std::string EventOrganizer::toString() const {
    std::string organizerString = "Event Organizer: " + name + "\n";
    organizerString += "webAddress: " + webAddress + "\n";
    organizerString += "Events:\n";
    for (const Event &event: events) {
        organizerString += event.to_string() + "\n";
    }
    return organizerString;
}
