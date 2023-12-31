#pragma once
#include "Pet.h"
#include <iostream>
using namespace std;

class Menu {
public:
  void printMenu();
  void createPet();
  Pet *loadGame();
  void playGame(Pet *pet);
  void saveGame(Pet *pet);
};