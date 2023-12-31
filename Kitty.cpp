#include "Kitty.h"
#include <iostream>
using namespace std;

Kitty::Kitty(string n, string a) : Pet() {
    setName(n);
    setAnimal(a);
    setEnergy(50);
    setSleepy(60);
    setHungry(40);
    setBoredom(20);
}

void Kitty::trainingTime() {
    cout << endl;
    cout << ".-----." << endl;
    cout << "| .-. | " << endl;
    cout << "| |.| | " << endl;
    cout << "| `-' | " << endl;
    cout << "`-----' " << endl;
    cout << endl;
    cout << "yay! " << getName() << " now knows how to use the litterbox!" << endl;
    energy = 100;
    hunger += 10;

    if (hunger >= 80) {
        cout << "It's time to eat!\n";
    }
}

void Kitty::playTime() {
    cout << endl;
    cout << "(`/\\" << endl;
    cout << "`=\\/\\ " << endl;
    cout << " `=\\/\\" << endl;
    cout << "  `=\\/ " << endl;
    cout << "     \\  " << endl;
    cout << endl;
    cout << "meow! " << getName() << " fiends for that feather and string combo!" << endl;
    boredom = 0;
    sleep += 25;

    if (sleep >= 90) {
        cout << "It's time to hit the hay!\n";
    }
}

void Kitty::eatingTime() {
    cout << endl;
    cout << endl;
    cout << " ._o8o8o8Oo_. " << endl;
    cout << "  \\========/ " << endl;
    cout << "   `------' " << endl;
    cout << endl;
    cout << "burppp! " << getName() << " loves eating wet cat food!" << endl;
    hunger = 0;
    sleep += 15;
    boredom += 10;

    if (sleep >= 90) {
        cout << "It's time to hit the hay!\n";
    }

    if(boredom >= 80){
      cout << getName() << " wants to play!" << endl;
   }
}

void Kitty::napTime() {
    cout << endl;
    cout << "      z " << endl;
    cout << " ! &&&  z        ! " << endl;
    cout << " |&&=}z________..| " << endl;
    cout << " |--||:::::::::::| " << endl;
    cout << endl;
    cout << "awww! " << getName() << " is catching some zzzZZzzZzz's on the sofa!" << endl;
    sleep = 0;
    energy -= 5;

    if (energy <= 10) {
        cout << getName() << " is restless, time to go train!\n";
    }
}

void Kitty::treatTime() {
  cout << endl;
  cout << "   \\ " << endl;
  cout << "  ()() " << endl;
  cout << " ()()() " << endl;
  cout << "  ()() " << endl;
  cout << "   () " << endl;
  cout << endl;
  cout << "purrrrr! " << getName() << " loves catnip!" << endl;
  energy += 5;
  boredom += 5;
  hunger -= 5;
}