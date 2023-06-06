#pragma once
#include <iostream>
#include "Archer.h"
#include "Ranger.h"
#include "Shooter.h"
using namespace std;


class ArcherTower : public Archer, public Ranger {
public:
    ArcherTower() {
        giveAmmunition("Arrows", 1);
    }
};

