#include <iostream>
using namespace std;

int a;
int b;
int select;
int result;

void input() {
    cout << "Type Number 1: ";
    cin >> a;
    cout << "Type Number 2: ";
    cin >> b;
}

void output() {
    cout << "Your result is: " << result;
}
void add() {
    input();
    result = a + b;
    output();
}

void sub() {
    input();
    result = a - b;
    output();
}

void mul() {
    input();
    result = a * b;
    output();
}

void div() {
    input();
    result = a / b;
    output();
}

int main() {
    cout << "1 = Add 2 = Sub 3 = Mul 4 = Div \n" << "Which Calculation?";
    cin >> select;

    switch (select) {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
    }
}
