#include "vehiclesAir.h"

Carpet::Carpet() : Aircraft("Ковёр-самолёт", 10, 1.0) {}
void Carpet::race(int distance) {
    double dist = static_cast<double>(distance);
    double speed = static_cast<double>(getSpeed());
    double result = dist / speed;

    if (distance < 1000) {
        setResult(result);
    }
    else if (distance < 5000) {
        setEfficiency(0.97);
    }
    else if (distance < 10000) {
        setEfficiency(0.9);
    }
    else if (distance >= 10000) {
        setEfficiency(0.95);
    }

    setResult(result * getEfficiency());
}

Eagle::Eagle() : Aircraft("Орёл", 8, 0.94) {}
void Eagle::race(int distance) {
    double dist = static_cast<double>(distance);
    double speed = static_cast<double>(getSpeed());
    double result = dist / speed;

    setResult(result * getEfficiency());
}

Broom::Broom() : Aircraft("Метла", 20, 1) {}
void Broom::race(int distance) {
    double dist = static_cast<double>(distance);
    double speed = static_cast<double>(getSpeed());
    double result = dist / speed;

    if (distance / 1000 > 0) {
        double newEff = 100 - distance / 1000;
        newEff /= 100;
        setEfficiency(newEff);
    }

    setResult(result * getEfficiency());
}