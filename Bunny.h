#pragma once
#include "Pet.h"
#include <iostream>
using namespace std;

class Bunny : public Pet {
public:
    Bunny(string n, string a);
    void trainingTime() override;
    void playTime() override;
    void eatingTime() override;
    void napTime() override;
    void treatTime() override;
};