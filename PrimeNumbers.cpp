// Emilia @ 6.7.23

#include <iostream>
using namespace std;

int CheckPrime(int Number) {
    bool Prime = true;
    for (int i = 2; i < Number; i++) {
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
    
    return -1;
}

int main() {
    for (int i = 2; i < 1000 + 1; ++i) {
        CheckPrime(i);
    }
        
    return -1;
}