#pragma once
#include <iostream>
#include "participants.h"
#include "vehiclesMain.h"
#include "vehiclesLand.h"
#include "vehiclesAir.h"

// ����� ������������������ ������������ �������
void registratedVehiclesPrint(int counter, Participants participants[]);

// ����������� ������������ ������� 
Participants* registration(int type, int distance);
