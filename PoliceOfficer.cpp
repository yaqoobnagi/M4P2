#include "PoliceOfficer.h"
#include <iostream>
using namespace std;

PoliceOfficer::PoliceOfficer(string n, string b) : name(n), badgeNumber(b) {}

void PoliceOfficer::inspectCar(const ParkedCar& car, const ParkingMeter& meter) const {
    int overMinutes = car.getParkedMinutes() - meter.getPurchasedMinutes();
    if(overMinutes > 0) {
        ParkingTicket ticket(car, name, badgeNumber, overMinutes);
        ticket.printTicket();
    } else {
        cout << "Car is legally parked. No ticket issued.\n";
    }
}
