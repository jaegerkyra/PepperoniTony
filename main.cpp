// PepporoniTony.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//declare variables
string Input;
int numPets = 0;


//Function for how Tony reacts to pets
void petting() {

    if (Input == "PET") {
        if (numPets == 0) {
            cout << "Tony liked that pet very much. He might like another pet." << endl;
            cout << numPets << endl;
        }
        if (numPets < 4) {
            cout << "Pepperoni Tony: Purrrrrrrrrrr!" << endl;
            numPets++;
            cout << numPets << endl;
        }
        else if (numPets < 7 && numPets >= 4) {
            cout << "Pepperoni Tony is all petted out for the day. He doesn't want any more pets." << endl;
            numPets++;
            cout << numPets << endl;
        }
        else {
            cout << "Pepperoni Tony has left the chat. Try coming back another time." << endl;
            numPets++;
            cout << numPets << endl;
        }
    }
    else {
        cout << "Pepperoni Tony: Merrooowwp?" << endl;
        cout << numPets << endl;
    }
}

int main()
{
    cout << "Hello! My name is Pepperoni Tony!\n" << "To pet me, enter 'PET'. To exit, enter 'x'. \n";
  

    do {
        cin >> Input;
        petting();
    } while ((Input != "x") || (numPets < 7));
    
    return 0;
}

