#pragma once
#include <iostream>

class Vehicle {
public:
    Vehicle(std::string _name, int _speed);

    std::string getName();
    double getResult();

protected:
    void setResult(double _result);
    int getSpeed();

private:
    std::string name;
    int speed;
    double result = -1;
};

class Landcraft : public Vehicle {
protected:
    Landcraft(std::string _name, int _speed, int _energy, int _rest);    

    int getRest();
    void setRest(int x);

    int getEnergy();

private:
    int rest;
    int energy;
};

class Aircraft : public Vehicle {
public:
    Aircraft(std::string _name, int _speed, double _efficiency);

protected:
    double getEfficiency();
    void setEfficiency(double x);

private:
    double efficiency;
};

//class Vehicle {
//public:
//    Vehicle(std::string _name, int _speed) {
//        name = _name;
//        speed = _speed;
//    }
//    // Вывод имени 
//    std::string getName() { return name; }
//
//    // Вывод результата 
//    double getResult() { return result; }
//
//protected:
//    void setResult(double _result) { result = _result; }
//    int getSpeed() { return speed; }
//
//private:
//    std::string name;
//    int speed;
//    double result = -1;
//};
//class Landcraft : public Vehicle {
//protected:
//    Landcraft(std::string _name, int _speed, int _energy, int _rest) : Vehicle(_name, _speed) {
//        energy = _energy;
//        rest = _rest;
//    }
//
//    int getRest() { return rest; }
//    void setRest(int x) { rest = x; }
//
//    int getEnergy() { return energy; }
//
//private:
//    int rest;
//    int energy;
//};
//class Aircraft : public Vehicle {
//public:
//    Aircraft(std::string _name, int _speed, double _efficiency) : Vehicle(_name, _speed) {
//        efficiency = _efficiency;
//    }
//
//
//protected:
//    double getEfficiency() { return efficiency; }
//    void setEfficiency(double x) { efficiency = x; }
//
//private:
//    double efficiency;
//};

