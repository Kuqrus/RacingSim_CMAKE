#include "vehiclesLand.h"

Camel::Camel() : Landcraft("Верблюд", 10, 30, 5) {}
void Camel::race(int distance) {

    double dist = static_cast<double>(distance);
    double speed = static_cast<double>(getSpeed());
    double time = dist / speed;

    int restCounter = 0;

    if (time > getEnergy()) {
        restCounter = static_cast<int>(time) / getEnergy();
        if (static_cast<int>(time) % restCounter == 0) {
            restCounter--;
        }
    }

    if (restCounter > 0) {
        time += getRest();

        if (restCounter > 1) {
            restCounter--;
            setRest(8);
            time += getRest() * restCounter;
        }
    }
    setResult(time);
}

FasterCamel::FasterCamel() : Landcraft("Верблюд-быстроход", 40, 10, 5) {}
void FasterCamel::race(int distance) {

    double dist = static_cast<double>(distance);
    double speed = static_cast<double>(getSpeed());
    double time = dist / speed;

    int restCounter = 0;

    if (time > getEnergy()) {
        restCounter = static_cast<int>(time) / getEnergy();
        if (static_cast<int>(time) % restCounter == 0) {
            restCounter--;
        }
    }

    if (restCounter > 0) {
        time += getRest();
        if (restCounter > 1) {
            restCounter--;
            time += 6.5;
        }
        if (restCounter > 2) {
            restCounter--;
            setRest(8);
            time += getRest() * restCounter;
        }
    }
    setResult(time);
}

Centaur::Centaur() : Landcraft("Кентавр", 15, 8, 2) {}
void Centaur::race(int distance) {
    double dist = static_cast<double>(distance);
    double speed = static_cast<double>(getSpeed());
    double time = dist / speed;

    int restCounter = 0;

    if (time > getEnergy()) {
        restCounter = static_cast<int>(time) / getEnergy();
        if (static_cast<int>(time) % restCounter == 0) {
            restCounter--;
        }
    }

    if (restCounter > 0) {
        time += getRest() * restCounter;
    }
    setResult(time);
}

Boots::Boots() : Landcraft("Ботинки-вездеходы", 6, 60, 10) {}
void Boots::race(int distance) {
    double dist = static_cast<double>(distance);
    double speed = static_cast<double>(getSpeed());
    double time = dist / speed;

    int restCounter = 0;

    if (time > getEnergy()) {
        restCounter = static_cast<int>(time) / getEnergy();
        if (static_cast<int>(time) % restCounter == 0) {
            restCounter--;
        }
    }

    if (restCounter > 0) {
        time += getRest();
        if (restCounter > 1) {
            restCounter--;
            setRest(5);
            time += getRest() * restCounter;
        }
    }
    setResult(time);
}