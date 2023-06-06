#pragma once
#include <iostream>
#include "Shooter.h"
using namespace std;

class Archer : public Shooter {
public:
    Archer() {
        ammunitionName = "Arrows";
    }
};

