//
// Created by Cverle on 24/03/2024.
//

#ifndef NALOGA4_EVENTORGANIZER_H
#define NALOGA4_EVENTORGANIZER_H
#include "Event.h"
#include "vector"

class EventOrganizer {
private:
    std::string name;
    std::string webAddress;
    vector<Event> events;
public:
    EventOrganizer(const std::string &name,const std::string webAddress);

    void addEvent(const Event &event);

    void sellTicket(unsigned int eventId);

    std::string toString() const;
};


#endif //NALOGA4_EVENTORGANIZER_H
