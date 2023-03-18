#pragma once
#include <iostream>
#include "vehiclesMain.h"

class Carpet : public Aircraft {
public:
    Carpet();
    void race(int distance);
};

class Eagle : public Aircraft {
public:
    Eagle();
    void race(int distance);
};

class Broom : public Aircraft {
public:
    Broom();
    void race(int distance);
};
