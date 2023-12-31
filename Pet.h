#pragma once
#ifndef PET_H
#define PET_H
#include <string>
using namespace std; 

class Pet {
  public: 
    Pet() : sleep(20), hunger(20), energy(20), boredom(20) {}
    virtual ~Pet();
    virtual string getAnimal() { return animal; }
    virtual void setAnimal(string a) { animal = a; }
    virtual void setHungry(int h) { hunger = h; }
    virtual int getHungry() { return hunger; }
    virtual void setName(string n) { name = n; }
    virtual string getName() { return name; }
    virtual void setSleepy(int s) { sleep = s; }
    virtual int getSleepy() { return sleep; }
    virtual void setEnergy(int e) { energy = e; }
    virtual int getEnergy() { return energy; }
    virtual void setBoredom(int b) { boredom = b; }
    virtual int getBoredom() { return boredom; }
    virtual void trainingTime();
    virtual void playTime();
    virtual void eatingTime();
    virtual void napTime();
    virtual void treatTime();
    void timeProgressed();

  protected:
    string name, animal;
    int sleep, hunger, energy, boredom;
}; 
#endif