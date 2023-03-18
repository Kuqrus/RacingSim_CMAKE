#pragma once
#include <iostream>
#include "vehiclesMain.h"

class Camel : public Landcraft {
public:
    Camel();
    void race(int distance);
};

class FasterCamel : public Landcraft {
public:
    FasterCamel();
    void race(int distance);
};

class Centaur : public Landcraft {
public:
    Centaur();
    void race(int distance);
};

class Boots : public Landcraft {
public:
    Boots();
    void race(int distance);
};
