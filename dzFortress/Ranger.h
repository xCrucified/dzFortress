#pragma once
#include <iostream>
#include "Shooter.h"
using namespace std;

class Ranger : public Shooter {
public:
    Ranger() {
        ammunitionName = "Arrows";
    }
};

