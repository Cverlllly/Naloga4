#include <iostream>
#include "EventOrganizer.h"
#include "Event.h"
#include "Concert.h"

int main() {
    EventOrganizer organizer("Neki Organizer", "www.neki.com");

    Location *location1 = new Location("Venue A", "Street 1", "City 1", "Country 1");
    Location *location2 = new Location("Venue B", "Street 2", "City 2", "Country 2");

    Event *event1 = new Event(1, "Event 1", 50.0f, 100, location1, Date(20, 4, 2015), EventAgeGroup::Adult);
    Event *event2 = new Event(2, "Event 2", 60.0f, 150, location2, Date(12, 5, 2020), EventAgeGroup::All);

    Concert *concert1 = new Concert(3, "Concert 1", 70.0f, 200, location1, Date(24, 6, 2025), EventAgeGroup::Adult,
                                    "Performer 1", ConcertType::Rock);
    Concert *concert2 = new Concert(4, "Concert 2", 80.0f, 250, location2, Date(24, 7, 2030), EventAgeGroup::All,
                                    "Performer 2", ConcertType::Pop);

    organizer.addEvent(event1);
    organizer.addEvent(event2);
    organizer.addEvent(concert1);
    organizer.addEvent(concert2);

    std::cout << "Event Organizer Information:\n" << organizer.toString() << std::endl;



    delete location1;
    delete location2;
    delete concert1;
    delete concert2;
    delete event1;
    delete event2;
    return 0;
}
