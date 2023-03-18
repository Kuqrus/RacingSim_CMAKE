#include "vehiclesMain.h"

Vehicle::Vehicle(std::string _name, int _speed) {
    name = _name;
    speed = _speed;
}

std::string Vehicle::getName() { return name; }
double Vehicle::getResult() { return result; }
void Vehicle::setResult(double _result) { result = _result; }
int Vehicle::getSpeed() { return speed; }



Landcraft::Landcraft(std::string _name, int _speed, int _energy, int _rest) : Vehicle(_name, _speed) {
    energy = _energy;
    rest = _rest;
}

int Landcraft::getRest() { return rest; }
void Landcraft::setRest(int x) { rest = x; }
int Landcraft::getEnergy() { return energy; }



Aircraft::Aircraft(std::string _name, int _speed, double _efficiency) : Vehicle(_name, _speed) {
    efficiency = _efficiency;
}

double Aircraft::getEfficiency() { return efficiency; }
void Aircraft::setEfficiency(double x) { efficiency = x; }