#include <iostream>
using namespace std;

int a = 10;
int b = 5;
int result;
bool debug = true;


void Message() {
    cout << "Calculator \n";
}

void Multiplication() {
    result = a * b;
    cout << "Multiplying \n" << result << "\n";
    //int x;
    //cin >> x;
}

void Add() {
    result = a + b;
    cout << "Adding \n" << result << "\n";
}

void Sub() {
    result = a - b;
    cout << "Subtracting \n" << result << "\n";
}

void Division() {
    result = a / b;
    cout << "Dividing \n" << result << "\n";
}

void test() {
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
  
} 


int main() {
    int x;
    int result;
    Message();
    if (debug == false) {
        Multiplication();
        Add();
        Sub();
        Division();
    } else {
        test();
    }
        

    return -1;
}

