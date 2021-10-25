
#include <iostream>
#include <string>
using namespace std;

//declare variables
string Input;
int numPets = 0;

//Random Number Generator
void randNumGen() {
    int x = Input.length();
    x = (x * x) / 2;
    cout << x << endl;
    


//Function for how Tony reacts to pets
void petting() {

    if (Input == "PET") {
        //For first pet, encoruage user to continue petting
        if (numPets == 0) {
            cout << "Tony liked that pet very much. He might like another pet." << endl;
        
        }
        //Tony responds positively to pets as long as it is not the fourth pet
        if (numPets < 4) {
            cout << "Pepperoni Tony: Purrrrrrrrrrr!" << endl;
            numPets++;
       
        }
        //After 4 pets, Tony stops purring and warn user to stop petting
        else if (numPets < 6 && numPets >= 4) {
            cout << "Pepperoni Tony is all petted out for the day. He doesn't want any more pets." << endl;
            numPets++;
         
        }
        //After 6 pets/2 warnings, program ends. Enough is enough.
        else {
            cout << "Pepperoni Tony has left the chat. Try coming back another time." << endl;
            numPets++;
            Input = "x";
        
        }
    }
    else {
        randNumGen();
        if (x < 2) {
            cout << "Pepperoni Tony: Merrooowwp?" << endl;
        }
        else if (x < 4) {
            cout << "Pepperoni Tony is looking at you." << endl;
        }
        else {
            cout << "Pepperoni Tony yawned." << endl;
        }
    }
}

int main()
{
    cout << "Hello! My name is Pepperoni Tony!\n" << "To pet me, enter 'PET'. To exit, enter 'x'. \n";
  

    do {
        cin >> Input;
        petting();
    } while (Input != "x");
    
    return 0;
}

