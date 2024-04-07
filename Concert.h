//
// Created by Cverle on 07/04/2024.
//

#ifndef NALOGA4_CONCERT_H
#define NALOGA4_CONCERT_H

#include "Event.h"

enum class ConcertType {
    Rock,
    Pop,
    Classical,
    Metal
};

class Concert : public Event {
private:
    ConcertType concertType;
public:
    std::string performer;
    Concert(unsigned int eventId, const std::string &eventName, float eventPrice, unsigned int tickets,
            Location *eventLocation, const Date &eventDate, EventAgeGroup eventGroup, const std::string &performer, ConcertType type);
    std::string toString() const override;
    std::string getPerformer() const;
    ConcertType getConcertType() const;
};

#endif //NALOGA4_CONCERT_H

