#include <iostream>
#include "Fortress.h"
using namespace std;

int main() {
    Fortress fortress;

    for (int i = 0; i < 3; i++) {
        fortress.Archer::shoot();
    }

    for (int i = 0; i < 2; i++) {
        fortress.Ranger::shoot();
    }

    fortress.Catapult::shoot();

    return 0;
}