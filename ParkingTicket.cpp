#include "ParkingTicket.h"
#include <iostream>
using namespace std;

ParkingTicket::ParkingTicket(const ParkedCar& c, const string& name, const string& badge, int overMinutes)
    : car(c), officerName(name), officerBadge(badge) {
    fine = 25; // first hour
    if(overMinutes > 60) {
        int extraHours = (overMinutes - 1) / 60; // each additional hour
        fine += extraHours * 10;
    }
}

void ParkingTicket::printTicket() const {
    cout << "\n*** Parking Ticket ***\n";
    cout << "Officer " << officerName << " Badge Number " << officerBadge << "\n";
    cout << "Vehicle License Number: " << car.getLicense() << "\n";
    cout << "Make: " << car.getMake() << " Model: " << car.getModel() 
         << " Color: " << car.getColor() << "\n";
    cout << "Parking Fee: $" << fine << "\n";
}
