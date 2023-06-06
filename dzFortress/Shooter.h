#pragma once
#include <iostream>
using namespace std;

class Shooter {
protected:
    string ammunitionName;
    int ammunitionCount;

public:
    Shooter() : ammunitionName(""), ammunitionCount(0) {}

    void shoot() {
        if (ammunitionCount > 0) {
            ammunitionCount--;
            cout << "Shot with " << ammunitionName << endl;
        }
        else {
            cout << "Out of ammunition!" << endl;
        }
    }

    void giveAmmunition(const string& name, int count) {
        this->ammunitionName = name;
        this->ammunitionCount = count;
    }
};