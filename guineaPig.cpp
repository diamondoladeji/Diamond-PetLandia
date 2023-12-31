#include "guineaPig.h"
#include <iostream>
using namespace std;

guineaPig::guineaPig(string n, string a) {
    setName(n);
    setAnimal(a);
    setEnergy(60);
    setSleepy(40);
    setHungry(70);
    setBoredom(20);
}

void guineaPig::trainingTime() {
    energy = 100;
    hunger += 10;
    boredom += 10;
    cout << endl;
    cout << ".--.--.--.  .--.--. " << endl;
    cout << "|     |        |  | " << endl;
    cout << ":  :--:  :  :  :  : " << endl;
    cout << "|  |     |  |     | " << endl;
    cout << ":  :  :  :--:--:--: " << endl;
    cout << "|  |  |           | " << endl;
    cout <<" :  :  :--:--:--:  : " << endl;
    cout << "|  |        |  |  | " << endl;
    cout << ":  :--:--:  :  :  : " << endl;
    cout << "|     |     |  |  | " << endl;
    cout << ":--:  :  :--:  :  : " << endl;
    cout << "|        |        | " << endl;
    cout << ":  :--:--:--:--:--: " << endl;
    cout << endl;
    cout << "purr purr" << getName() << " successfully went through its maze!" << endl;

    if (hunger >= 80) {
        cout << "It's time to eat!\n";
    }
}

void guineaPig::playTime() {
    boredom = 0;
    sleep += 15;
    cout << endl;
    cout << "     ____   " << endl;                   
    cout << "  __/ \\--\\   " << endl;                 
    cout << "    |_|__|  " << endl;
    cout << endl;
    cout << "so cute! " << getName() << " is having so much fun in its play pen!" << endl;

    if (sleep >= 90) {
        cout << "It's time to hit the hay!\n";
    }
}

void guineaPig::eatingTime() {
    hunger = 0;
    sleep += 15;
    cout << endl;
    cout << "    _//\\_  " << endl;
    cout << "   __\\  /__ " << endl;
    cout << "  <_      _> " << endl;
    cout << "    |/ )\\| " << endl;
    cout << endl;
    cout << "nom nom! " << getName() << " loves eating vegetables!" << endl;

    if (sleep >= 90) {
        cout << "It's time to hit the hay!\n";
    }

  if(boredom >= 80){
      cout << getName() << " wants to play!" << endl;
  }
}

void guineaPig::napTime() {
    sleep = 0;
    energy -= 12;
    cout << endl;
    cout << "      z " << endl;
    cout << " ! &&&  z        ! " << endl;
    cout << " |&&=}z________..| " << endl;
    cout << " |--||:::::::::::| " << endl;
    cout << endl;
    cout << "purrr! " << getName() << " is now cooped up in their sleeping cave!" << endl;

    if (energy <= 10) {
        cout << getName() << " is restless, time to go train!\n";
    }
}

void guineaPig::treatTime(){
  cout << endl;
  cout << "   ,-. " << endl;
  cout << " _(*_*)_ " << endl;
  cout << "(_  o  _) " << endl;
  cout << "  / o \\  " << endl;
  cout << " (_/ \\_)  " << endl;
  cout << endl;
  cout << "nom nom! " << getName() << " is finised the danishes!" << endl;
  hunger -= 5;
  boredom += 5;
  energy += 5;
}