// Emilia @ 13.7.2023

#include <iostream>
using namespace std;

class Dog {
    public:
        int Legs;
        string Tail;
        string Mouth;
};

int main() {
    
    Dog NormalDog;
    Dog WeirdDog;

    NormalDog.Legs = 4;
    WeirdDog.Legs = 13;

    NormalDog.Tail = "Wag";
    WeirdDog.Tail = "Brrrr";

    NormalDog.Mouth = "Woof";
    WeirdDog.Mouth = "Moo";

    cout << "Legs: " << endl << "Normal Dog: " << NormalDog.Legs << endl << "Weird Dog: " << WeirdDog.Legs << endl << endl;
    cout << "Tails: " << endl  << "Normal Dog: " << NormalDog.Tail << endl << "Weird Dog: " << WeirdDog.Tail << endl << endl;
    cout << "Mouth: " << endl  << "Normal Dog: " << NormalDog.Mouth << endl << "Weird Dog: " << WeirdDog.Mouth << endl << endl;

    return 0;
}