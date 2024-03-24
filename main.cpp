#include <iostream>

using namespace std;

#include "EventOrganizer.h"

int main() {
    EventOrganizer organizer("Sonček", "Cesta v Sloveniji");

    // Create Event objects
    Event event1(1, "Koncert", 50.0, 10, Location("Stadium", "Cesta 1", "Celje", "Slovenija"), Date(15, 4, 2025),
                 EventAgeGroup::Adult);
    Event event2(2, "Piknik", 10.0, 200, Location("Park", "Cesta 2", "Maribor", "Slovenija"), Date(19, 5, 2024),
                 EventAgeGroup::Child);
    Event event3(3, "Art", 20.0, 50, Location("Galerija", "Cesta 3", "Ljubljana", "Slovenija"), Date(28, 2, 2025),
                 EventAgeGroup::All);

    organizer.addEvent(event1);
    organizer.addEvent(event2);
    organizer.addEvent(event3);

    organizer.sellTicket(1);
    organizer.sellTicket(2);
    organizer.sellTicket(3);

    cout << organizer.toString() << endl;

    return 0;
}
