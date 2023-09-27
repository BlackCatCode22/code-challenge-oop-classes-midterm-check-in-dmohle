#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Animal {
private:
    string name = "";
    string species = "";
    inline static int numOfAnimals = 0;

public:
     Animal(string theName, string theSpecies) {
       name = theName;
       species = theSpecies;
       // increment numOfAnimals
       numOfAnimals++;
    }
     string getAnimalName() {
        return name;
    }

    string getAnimalSpecies() {
        return species;
    }

    int getNumOfAnimals() {
        return numOfAnimals;
    }
};

class Hyena : public Animal {
public:
    // This is a constructor!
    Hyena(string theName, string theSpecies):Animal(theName, theName) {
        name = theName;

    }


};




int main()
{
    Hyena myNewHyena;


    cout << "\n Welcome to my Midterm Check In !! \n" << endl;

    cout << " \n\nBefore creating a couple animals, num of animals is " << Animal::getNumOfAnimals << "\n\n";


    // Create an animal object.
    Animal myNewAnimal01("I expect a NAME", "and Species");
    // Create another animal object
    Animal animalTwo("This is Animal Two", "Hyena");

// animalTwo.numOfAnimals = 222;

    cout << " \n\nafter creating a couple animals, numOfAimals is " << Animal::getNumOfAnimals << "\n\n";

    // Examine the public members.
    // this will not work!
    // myNewAnimal01.name = "Name One";
    // myNewAnimal01.species = "Hyena";

    cout << " The name of this animal is: " << myNewAnimal01.getAnimalName() << endl;
    cout << " The species is: " << myNewAnimal01.getAnimalSpecies() << endl;

    cout << " The name of this animal is: " << animalTwo.getAnimalName() << endl;
    cout << " The species is: " << animalTwo.getAnimalSpecies() << endl;

    // Animal::numOfAnimals+=5;

    cout << " \n\nNum of animals is: " << Animal::getNumOfAnimals << "\n\n";

    return 0;
}
