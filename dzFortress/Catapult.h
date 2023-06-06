#pragma once
#include <iostream>
#include "Shooter.h"

class Catapult : public Shooter {
public:
    Catapult() {
        ammunitionName = "Stones";
    }
};

