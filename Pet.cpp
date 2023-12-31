#include "Pet.h"
#include <iostream> 
using namespace std;

Pet::~Pet(){}

void Pet::trainingTime() {
    energy = 100;
    hunger += 15;

    if (hunger > 80) {
        cout << "It's time to eat!\n";
    }
}

void Pet::playTime() {
    boredom = 0;
    sleep += 15;

    if (sleep > 90) {
        cout << "It's time to hit the hay!\n";
    }
}

void Pet::eatingTime() {
    hunger = 0;
    sleep += 15;

    if (sleep > 90) {
        cout << "It's time to hit the hay!\n";
    }
}

void Pet::napTime() {
    sleep = 0;
    energy -= 5;

    if (energy < 20) {
        cout << getName() << " is restless, time to go train!\n";
    }
}

void Pet::treatTime() {
  energy += 5;
  hunger -= 5;
}

void Pet::timeProgressed() {
    sleep += 5;
    hunger += 5;
    energy -= 5;
    cout << "an hour has gone by, check out " << getName() << "'s status!" << endl;

    if (hunger >= 80) {
        cout << "It's time to eat!\n";
    }

    if (sleep >= 90) {
        cout << "It's time to hit the hay!\n";
    }

    if (energy <= 20) {
        cout << getName() << " is restless, time to go train!\n";
    }
}