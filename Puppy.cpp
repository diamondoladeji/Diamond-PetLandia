#include "Puppy.h"
#include <iostream>
using namespace std;

Puppy::Puppy(string n, string a) : Pet() {
    setName(n);
    setAnimal(a);
    setEnergy(100);
    setSleepy(30);
    setHungry(80);
    setBoredom(20);
}

void Puppy::trainingTime() {
    cout << endl;
    cout << "              __ " << endl;
    cout << "            /\\//'-, " << endl;
    cout << "     ,--'''''   /" "" << endl;
    cout << "____,'.  )      \\___ " << endl;
    cout << "------''""""`---------:'" << endl;
    cout << endl;
    cout << "yay! " << getName() << " just learned how to sit and roll over!" << endl;
    energy = 100;
    hunger += 20;

    if (hunger >= 80) {
        cout << "It's time to eat!\n";
    }
}

void Puppy::playTime() {
    cout << endl;
    cout << "  _._ " << endl;
    cout << " .'--.`.  " << endl;
    cout << " |  .' |  " << endl;
    cout << "  `--`' " << endl;
    cout << endl;
    cout << "awww! " << getName() << " loves playing fetch!" << endl;
    boredom = 0;
    sleep += 20;

    if (sleep >= 90) {
        cout << "It's time to hit the hay!\n";
    }
}

void Puppy::eatingTime() {
    cout << endl;
    cout << " ._o8o8o8Oo_. " << endl;
    cout << "  \\========/ " << endl;
    cout << "   `------' " << endl;
    cout << endl;
    cout << "mmm yummy! " << getName() << " gobbled all its kibble!" << endl;
    hunger = 0;
    sleep += 10;
    boredom += 10;

    if (sleep >= 90) {
        cout << "It's time to hit the hay!\n";
    }
    if(boredom >= 80){
        cout << getName() << " wants to play!" << endl;
    }
}

void Puppy::napTime() {
    cout << endl;
    cout << "      z " << endl;
    cout << " ! &&&  z        ! " << endl;
    cout << " |&&=}z________..| " << endl;
    cout << " |--||:::::::::::| " << endl;
    cout << endl;
    cout << "yawn! " << getName() << " is fast asleep zZZzzzZZZZzzz!" << endl;
    sleep = 0;
    energy -= 10;

    if (energy <= 20) {
        cout << getName() << " is restless, time to go train!\n";
    }
}

void Puppy::treatTime() {
  cout << endl;
  cout << " _       _ " << endl;
  cout << "(_'-----'_)" << endl;
  cout << "(_.'""""._) " << endl;
  cout << endl;
  cout << "yum! " << getName() << " ate all its bone shaped treats!" << endl;
  energy += 5;
  boredom += 5;
  hunger -= 5;
}