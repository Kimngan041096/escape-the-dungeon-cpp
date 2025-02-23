#include <iostream>
#include <string>
using namespace std;


void introduction() {
    cout << "Welcome to Escape the Dungeon!" << endl;
    cout << "You find yourself trapped in a dark, damp dungeon..." << endl;
    cout << "Your mission is to find a way out." << endl;
}

int main() {
    introduction();

    
    cout << "You see two paths: left and right." << endl;
    cout << "Which way will you go? (left/right): ";
    
    string choice;
    cin >> choice;

    if (choice == "left") {
        cout << "You walk down the left path..." << endl;
       
    } else if (choice == "right") {
        cout << "You walk down the right path..." << endl;
       
    } else {
        cout << "Invalid choice! You must choose either left or right." << endl;
        return 1;  
    }

    
    cout << "You encounter a monster! Choose your weapon:" << endl;
    cout << "1. Sword\n2. Bow\n3. Magic Wand" << endl;

    int weaponChoice;
    cin >> weaponChoice;

    switch (weaponChoice) {
        case 1:
            cout << "You draw your sword and prepare for battle!" << endl;
            break;
        case 2:
            cout << "You ready your bow and aim carefully." << endl;
            break;
        case 3:
            cout << "You wield the magic wand and cast a spell!" << endl;
            break;
        default:
            cout << "Invalid choice, you have no weapon!" << endl;
            return 1;  
    }

    
    int decision;
    cout << "Enter 1 to fight, 2 to flee: ";
    cin >> decision;

    if (decision != 1 && decision != 2) {
        cout << "Invalid input, please choose 1 to fight or 2 to flee." << endl;
        return 1;  
    }

    
    int monsterHealth = 100;  
    int playerHealth = 100;   

    if (decision == 1) {
        cout << "You decide to fight the monster!" << endl;
        monsterHealth -= 50; 

        if (monsterHealth <= 0) {
            cout << "You defeated the monster!" << endl;
        } else {
            cout << "The monster attacks and you lose 20 health!" << endl;
            playerHealth -= 20;

            if (playerHealth <= 0) {
                cout << "You have been defeated by the monster!" << endl;
                return 0;  
            }
        }
    } else if (decision == 2) {
      
        cout << "You decide to flee from the monster!" << endl;
    }


    string inventory[3] = {"Sword", "Health Potion", "Key"};
    cout << "Your inventory: ";
    for (int i = 0; i < 3; i++) {
        cout << inventory[i] << " ";
    }
    cout << endl;

    return 0; 

}