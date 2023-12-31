#include "Bunny.h"
#include <iostream>
using namespace std;

Bunny::Bunny(string n, string a) : Pet() {
  setName(n);
  setAnimal(a);
  setEnergy(90);
  setSleepy(40);
  setHungry(70);
  setBoredom(20);
}

void Bunny::trainingTime() {
  energy = 100;
  hunger += 20;
  cout << endl;
  cout << "        ((`\\ " << endl;
  cout << "     ___ \\ '--._" << endl;
  cout << "  .'`   `'    o  )     thump! thump!" << endl;
  cout << "  /   \\   '. __.' " << endl;
  cout << "_|    /_  \\ \\_\\_ " << endl;
  cout << "{_\\______\\-'\\__\\_\\ " << endl;
  cout << endl;
  cout << "thump thump! " << getName() << " just learned how to spin!" << endl;
  
  if (hunger >= 80) {
    cout << "It's time to eat!\n";
  }
}

void Bunny::playTime() {
  boredom = 0;
  sleep += 15;
  cout << endl;
  cout << "    \\| // " << endl;
  cout << "     |//  " << endl;
  cout << "   \\ |//  // " << endl;
  cout << " ^^^^^^^^^^^^^^^ " << endl;
  cout << endl;
  cout << "how cute! " << getName() << " can't stop hopping around in the grass!" << endl;
  
  if (sleep >= 90) {
    cout << "It's time to hit the hay!\n";
  }
}

void Bunny::eatingTime() {
  hunger = 0;
  sleep += 10;
  boredom += 10;
  cout << endl;
  cout << "    _//\\_  " << endl;
  cout << "   __\\  /__ " << endl;
  cout << "  <_      _> " << endl;
  cout << "    |/ )\\| " << endl;
  cout << endl;
  cout << "crunch crunch! " << getName() << " can't get enough of grass!" << endl;
  
  if (sleep >= 90) {
    cout << "It's time to hit the hay!\n";
  }

  if(boredom >= 80){
      cout << getName() << " wants to play!" << endl;
  }
}

void Bunny::napTime() {
  sleep = 0;
  energy -= 6;
  cout << endl;
  cout << "      z " << endl;
  cout << " ! &&&  z        ! " << endl;
  cout << " |&&=}z________..| " << endl;
  cout << " |--||:::::::::::| " << endl;
  cout << endl;
  cout << getName() << " is all worn out and sleeps peacefully in their cage!" << endl;
  
  if (energy <= 10) {
    cout << getName() << " is restless, time to go train!\n";
  }
}

void Bunny::treatTime() {
  cout << endl;
  cout << "  \\/_ " << endl;
  cout << " _/ " << endl;       
  cout << "(,;) " << endl;
  cout << "(,.) " << endl;
  cout << "(,/ " << endl;
  cout << "|/ " << endl;
  cout << endl;
  cout << "Yum! " << getName() << " is happy and grateful for the carrot!" << endl;
  hunger -= 5;
  boredom += 5;
  energy += 5;
}