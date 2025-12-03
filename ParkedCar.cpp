#include "ParkedCar.h"

ParkedCar::ParkedCar(string mk, string md, string cl, string lic, int min)
    : make(mk), model(md), color(cl), license(lic), parkedMinutes(min) {}

int ParkedCar::getParkedMinutes() const { return parkedMinutes; }
string ParkedCar::getMake() const { return make; }
string ParkedCar::getModel() const { return model; }
string ParkedCar::getColor() const { return color; }
string ParkedCar::getLicense() const { return license; }
