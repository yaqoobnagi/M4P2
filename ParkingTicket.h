#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "ParkedCar.h"
#include <string>
using namespace std;

class ParkingTicket {
private:
    ParkedCar car;
    string officerName, officerBadge;
    int fine;
public:
    ParkingTicket(const ParkedCar& c, const string& name, const string& badge, int overMinutes);
    void printTicket() const;
};

#endif
