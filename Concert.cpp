//
// Created by Cverle on 07/04/2024.
//

#include "Concert.h"
#include "iostream"

Concert::Concert(unsigned int eventId, const std::string &eventName, float eventPrice, unsigned int tickets,
                 Location *eventLocation, const Date &eventDate, EventAgeGroup eventGroup, const std::string &performer, ConcertType type)
        : Event(eventId, eventName, eventPrice, tickets, eventLocation, eventDate, eventGroup), performer(performer), concertType(type) {}


std::string Concert::getPerformer() const {
    return performer;
}

ConcertType Concert::getConcertType() const {
    return concertType;
}

std::string Concert::toString() const {
    std::string typeStr;
    switch (concertType) {
        case ConcertType::Rock:
            typeStr = "Rock";
            break;
        case ConcertType::Pop:
            typeStr = "Pop";
            break;
        case ConcertType::Classical:
            typeStr = "Classical";
            break;
        case ConcertType::Metal:
            typeStr = "Metal";
            break;
    }
    return Event::toString()+
           + "Performer: " + performer + "\n"
           + "Type: " + typeStr + "\n";
}
