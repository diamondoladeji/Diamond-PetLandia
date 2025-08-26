#include "Menu.h"
#include "Pet.h"
#include "Puppy.h"
#include "Bunny.h"
#include "Kitty.h"
#include "guineaPig.h"
#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

#include "Menu.h"

int main() {
    Menu menu;
    menu.printMenu();

    int choice;
    std::cin >> choice;

    switch(choice) {
        case 1:
            menu.createPet();
            break;
        case 2: {
            Pet* pet = menu.loadGame();
            if (pet != nullptr) {
                menu.playGame(pet);
            }
            break;
        }
        case 3:
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice!\n";
            break;
    }

    return 0;
}

void Menu::printMenu() {
    cout << "---------------------------------------------------------------" << endl;
    cout << "              * Welcome to Diamond's PetLandia! *" << endl;
    cout << endl;
    cout << "---------------------------* RULES *---------------------------" << endl;
    cout << endl;
    cout << "Create your furry friend and have fun interacting with them!\n";
    cout << "Before selecting an activity to do with your pet, make sure to " << endl;
    cout << "check out your pet's status!" << endl;
    cout << "If your pet's hunger or sleepy levels reach 100, they will die! " << endl;
    cout << "Your pet will also die if energy or boredom levels reach 0!" << endl;
    cout << "All pets start out with a boredom level of 40%! " << endl;
    cout << "Giving your pet a treat will boost their stats, but it will " << endl;
    cout << "also lower their boredom levels!" << endl;
    cout << endl;
    cout << "---------------------------* MENU *---------------------------" << endl;
    cout << "1. Create a Pet\n";
    cout << "2. Load Game\n";
    cout << "3. Quit\n";
    cout << "---------------------------------------------------------------" << endl;
}

void Menu::createPet() {
    cout << endl;
    cout << "Choose a pet:\n";
    cout << "1. Puppy\n";
    cout << "2. Kitty\n";
    cout << "3. Bunny\n";
    cout << "4. Guinea Pig\n";
    cout << "option: ";

    int choice;
    cin >> choice;

    if (cin.fail()) {
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid input. Please enter a number.\n";
        return;
    }

    string name;
    string animal;

    cout << endl;
    cout << "Enter a name for your new pet! " << endl;
    cout << "Name: ";
    cin.ignore(); 
    getline(cin, name);


    switch (choice) {
        case 1:
            animal = "Puppy";
            break;
        case 2:
            animal = "Kitty";
            break;
        case 3:
            animal = "Bunny";
            break;
        case 4:
            animal = "Guinea Pig";
            break;
        default:
            cout << "Invalid pet choice, try again!\n";
            return;
    }

    Pet* pet;
    switch (choice) {
        case 1:
            pet = new Puppy(name, animal);
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << endl;
            cout << "    |\\_/|      " << endl;            
            cout << "    | @ @   Woof! " << endl;
            cout << "    |   <>              _  " << endl;
            cout << "    |  _/\\------____ ((| |)) " << endl;
            cout << "    |               `--' |   " << endl;
            cout << "____|_       ___|   |___.'  " << endl;
            cout << "/_/_____/____/_______| " << endl;

            cout << endl;
            cout << "You have created a puppy named " << name << "! " << endl;
            cout << "Puppies are very energetic, so they start off with 100% of energy! Their sleepy levels start" << endl;
            cout << "at 30%, so they're up and runnin! " << endl;
            cout << "Puppies also start the game with a high hunger level at 80%! So be sure to feed them quickly!" << endl;
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << endl;

            break;
        case 2:
            pet = new Kitty(name, animal);
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << endl;
            cout << "_._     _,-'""`-._ " << endl;
            cout << "(,-.`._,'(       |\\`-/| " << endl; 
            cout << "    `-.-' \\ )-`( , o o)    meowww!" << endl;
            cout << "           `-    \\`_`'- " << endl;
            cout << endl;
            cout << "You have created a kitty named " << name << "! " << endl;
            cout << "Although kittens are calm, they can be pretty lazy, so energy levels are at 50%! Their sleepy " << endl;
            cout << "levels are also set to 60%! Let your kitty rest or else they will sleep forever!" << endl;
            cout << "Thankfully, they're hunger levels are at 40%, so no rush to feed them!" << endl;
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << endl;

            break;
        case 3:
            pet = new Bunny(name, animal);
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << endl;
            cout << "        ((`\\ " << endl;
            cout << "     ___ \\ '--._" << endl;
            cout << "  .'`   `'    o  )     thump! thump!" << endl;
            cout << "  /   \\   '. __.' " << endl;
            cout << "_|    /_  \\ \\_\\_ " << endl;
            cout << "{_\\______\\-'\\__\\_\\ " << endl;
            cout << endl;
            cout << "You have created a bunny named " << name << "! " << endl;
            cout << "Bunnies are very hyper, so their energy levels begin at 90%!" << endl;
            cout << "However, they eat ALOT of greens, so hunger levels are set to 70%! Feed your pet!" << endl;
            cout << "Thankfully, sleepy levels are at 40%! No need to worry about naptime for now!" << endl;
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << endl;

            break;
        case 4:
            pet = new guineaPig(name, animal);
            cout << endl;
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << endl;
            cout << "           (`-()_.-=-. " << endl;
            cout << "ppppprr!  /66  ,  ,  \\ " << endl;
            cout << "        =(o_/=//_(   /======` " << endl;
            cout << "              ~` ~ ~~` " << endl;
            cout << endl;
            cout << "You have created a guinea pig named " << name << "! " << endl;
            cout << "Guinea pigs spend alot of time in their pens, so their energy levels start at 60%! " << endl;
            cout << "They eat almost anything, so their hunger levels are at 70%! Feed them ASAP!" << endl;
            cout << "Guinea pigs don't need to sleep much! Sleepy levels are set t0 40%!" << endl;
            cout << "----------------------------------------------------------------------------------------------" << endl;
            cout << endl;
          
            break;
        default:
            cout << "Invalid pet choice, try again!\n";
            return;
    }
    string answer;
    cout << "type in 'yes' or 'Yes' to adopt '" << name << "! ";
    cin >> answer;
    if(answer == "yes" || answer == "Yes"){
    playGame(pet);
    }
    else{
      cout << "You have chosen not to adopt " << name << ". Goodbye!";
      exit(-1);
    }
}

Pet* Menu::loadGame() {
    string filename;
    cout << "Welcome back to Diamond's PetLandia!" << endl;
    cout << "Enter the player name to load the game: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Failed to open the file!\n";
        return nullptr;
    }

    string animal, name;
    int sleep, hunger, energy, boredom;

    file >> animal >> name >> sleep >> hunger >> energy >> boredom;

    if (animal == "Puppy") {
        return new Puppy(name, animal);
    } else if (animal == "Kitty") {
        return new Kitty(name, animal);
    } else if (animal == "Bunny") {
        return new Bunny(name, animal);
    } else if (animal == "Guinea Pig") {
        return new guineaPig(name, animal);
    } else {
        cout << "Invalid pet type in the file!\n";
        return nullptr;
    }
}

void Menu::playGame(Pet* pet) {
    cout << endl;
    cout << "Pet chosen: " << pet->getAnimal() << endl;
    cout << "Name: " << pet->getName() << endl;

    int choice;
    do {
        cout << endl;
        cout << pet->getName() << "'s Current Status:\n";
        cout << "Energy: " << pet->getEnergy() << "\n";
        cout << "Hunger: " << pet->getHungry() << "\n";
        cout << "Sleepiness: " << pet->getSleepy() << "\n";
        cout << "Boredom: " << pet->getBoredom() << "\n";
      
        cout << "---------------------------* ACTIVITY MENU *---------------------------" << endl;
        cout << "1. Training Time with " << pet->getName() << endl;;
        cout << "2. Play Time with " << pet->getName() << endl;;
        cout << "3. Eating Time with " << pet->getName() << endl;;
        cout << "4. Nap Time with " << pet->getName() << endl;;
        cout << "5. Progress To The Next Hour\n";
        cout << "6. Give " << pet->getName() << " a Treat! " << endl;;
        cout << "7. Save Game\n";
        cout << "8. Quit Game\n";
        cout << "-----------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;
      

        switch (choice) {
            case 1:
                pet->trainingTime();
                break;
            case 2:
                pet->playTime();
                break;
            case 3:
                pet->eatingTime();
                break;
            case 4:
                pet->napTime();
                break;
            case 5:
                pet->timeProgressed();
                break;
            case 6:
                pet->treatTime();
                break;
            case 7:
                saveGame(pet);
                break;
            case 8:
                cout << "Thanks for playing!\n";
                break;
            default:
                cout << "Invalid choice, try again!\n";
                break;
        }

        if (pet->getHungry() >= 100 || pet->getSleepy() >= 100 || pet->getEnergy() <= 0 || pet->getBoredom() >= 100) {
            cout << "Game over! Your pet has perished. WHOMP WHOMP! :(\n";
            break;
        }
    } while (choice != 8);

    delete pet;
}

void Menu::saveGame(Pet* pet) {
    string filename;
    cout << "Enter the player name to save the game: ";
    cin >> filename;

    ofstream file(filename);
    if (!file.is_open()) {
        cout << "Failed to open the file for saving!\n";
        return;
    }

    file << pet->getAnimal() << " "
         << pet->getName() << " "
         << pet->getSleepy() << " "
         << pet->getHungry() << " "
         << pet->getEnergy() << " "
         << pet->getBoredom() << "\n";

    cout << "Game saved successfully!\n";
}