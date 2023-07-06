// Emilia @ 6.7.23

#include <iostream>
using namespace std;

void CheckPrime(int Number) {
    bool Prime = true;
    for (int i = 2; i < sqrt(Number); i++) {
        if (Number % i == 0) {
            Prime = false;
            break;
        }
    }

    if (Prime == true) {
        cout << Number << " is a prime number \n";
    } //else {
        //cout << Number << " is not a prime number \n";
    //}
}

int main() {
    for (int i = 2; i < 10000000 + 1; ++i) {
        CheckPrime(i);
    }
        
    return -1;
}
