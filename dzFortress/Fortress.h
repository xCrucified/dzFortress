#pragma once
#include "ArcherTower.h"
#include "Catapult.h"

class Fortress : public ArcherTower, public Catapult {
private:
    int wallThickness;
    int gateCondition;

public:
    Fortress() {
        wallThickness = 100;
        gateCondition = 100;
        giveAmmunition("Arrows", 4);
        giveAmmunition("Stones", 1);
    }
};

