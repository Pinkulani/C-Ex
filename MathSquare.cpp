// Emilia @ 8.7.2023

#include <iostream>
using namespace std;

int Length = 0;
int Width = 0;

void Circumference() {
    int Circumference = Length + Width;
    cout << "Circumference of the Square is: " << Circumference * 2 << endl;
}

void Area() {
    int Area = Length * Width;
    cout << "Area of the Square is: " << Area << endl;
}


int main() {
    cout << "Square Length: ";
    cin >> Length;
    cout << "Square Width: ";
    cin >> Width;

    Circumference();
    Area();

    return -1;
}