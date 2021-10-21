#include <iostream>
using namespace std;

int main()
{
    cout << "Hello! My name is Pepperoni Tony!\n" << "To pet me, enter 'PET'.\n";


    string Input;
    cin >> Input;
  
  //Initialize the number of pets to 0
    int numPets = 0;


        if (Input == "PET") {
          //if this is the first pet, encourage more pets
            if (numPets == 0) {
                cout << "Tony liked that pet very much. He might like another pet." << endl;
                numPets++;
            }
          //as long is this not the sixth pet or more, Tony will purr
            if (numPets < 6) {
                cout << "Pepperoni Tony: Purrrrrrrrrrr!" << endl;
                numPets++;
            }
          //After 5 pets, even Pepperoni Tony has had enough
            else {
                cout << "Pepperoni Tony is all petted out for the day. He doesn't want any more pets." << endl;
            }
        }
        //If anything other than "PET" is entered, Tony will chirp back
        else {
            cout << "Pepperoni Tony: Merrooowwp?" << endl;
        }
    
    return 0;
}
