// Emilia / Pinkulani @ 29.6.23 

#include <iostream>
#include <stdlib.h>
using namespace std;

int Number;
int A[5];
int B[5];
int C[5];

int RandomNumber() {
    int RDM;
    //srand (time(NULL));
    RDM = rand() % 9;
    return RDM;
}

int PasswordArray() {
    for (int i = 0; i < 5; i++) {
        A[i] = RandomNumber();
        cout << A[i];
    }
    return -1;
}

int main() {
    cout << "Password Generator \n";
    PasswordArray();
    //RandomNumber();
    
}

