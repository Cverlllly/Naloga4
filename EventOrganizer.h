//
// Created by Cverle on 24/03/2024.
//

#ifndef NALOGA4_EVENTORGANIZER_H
#define NALOGA4_EVENTORGANIZER_H

#include "Event.h"
#include <vector> // Include the <vector> header for using std::vector

class EventOrganizer {
private:
    std::string name;
    std::string webAddress;
    std::vector<Event*> events;
public:
    EventOrganizer(const std::string &name, const std::string &webAddress); // Added missing & symbol

    ~EventOrganizer();

    void addEvent(Event* event);


    void sellTicket(unsigned int eventId);

    std::string toString() const;

    std::vector<Event*> findEventByLocation(Location *location) const;

    void sort(bool (*f)(Event*, Event*));

};

#endif //NALOGA4_EVENTORGANIZER_H

