#include "ParkingMeter.h"

ParkingMeter::ParkingMeter(int min) : purchasedMinutes(min) {}
int ParkingMeter::getPurchasedMinutes() const { return purchasedMinutes; }
