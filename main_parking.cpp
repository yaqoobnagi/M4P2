#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include <iostream>
using namespace std;

int main() {
    // Scenario 1: Car parked legally
    ParkedCar car1("Toyota","Camry","Red","XYZ123",30);
    ParkingMeter meter1(40);
    PoliceOfficer officer1("John Doe","5678");
    officer1.inspectCar(car1,meter1);

    // Scenario 2: Car parked illegally (<1 hour)
    ParkedCar car2("Honda","Accord","Blue","ABC987",70);
    ParkingMeter meter2(60);
    PoliceOfficer officer2("Jane Smith","1234");
    officer2.inspectCar(car2,meter2);

    // Scenario 3: Car parked illegally (>1 hour)
    ParkedCar car3("Ford","Mustang","Black","LMN456",190);
    ParkingMeter meter3(60);
    PoliceOfficer officer3("James Brown","4321");
    officer3.inspectCar(car3,meter3);

    return 0;
}
