#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;

class ParkedCar {
private:
    string make, model, color, license;
    int parkedMinutes;
public:
    ParkedCar(string mk, string md, string cl, string lic, int min);
    int getParkedMinutes() const;
    string getMake() const;
    string getModel() const;
    string getColor() const;
    string getLicense() const;
};

#endif
