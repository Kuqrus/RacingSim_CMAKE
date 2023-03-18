#pragma once
#include <iostream>
#include "participants.h"
#include "vehiclesMain.h"
#include "vehiclesLand.h"
#include "vehiclesAir.h"

// ¬ывод зарегистрированных транспортных средств
void registratedVehiclesPrint(int counter, Participants participants[]);

// –егистраци€ транспортных средств 
Participants* registration(int type, int distance);
