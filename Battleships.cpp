// Emilia @ 7.7.23

#include <iostream>
using namespace std;

int Score = 0;


int** CreateMatrix(int Columns, int Rows) {
    int** Array = 0;
    Array = new int*[Columns];
    for (int x = 0; x < Rows; x++) {
        Array[x] = new int[Rows];
        
    }
    
  return Array;
}

void DrawMatrix(int** array, int rows, int columns) {
    for (int X = 0; X < rows; X++) {
        cout << endl;
        for (int Y = 0; Y < columns; Y++) {
            cout << array[X][Y];
        }
    } 
}

void TransformToPlayField(int** array, int rows, int columns) {
    for (int X = 0; X < rows; X++) {
        for (int Y = 0; Y < columns; Y++) {
            array[X][Y] = 7;
        }
    } 
}

void CreateRandomBoatPlacement(int** array)  {
    int hi; 
    // this random function will not work properly
    for (int X = 0; X < 10; X++) {
        hi = rand() % 10;
        array[X][hi] = 1;
        }
    } 



int main() {
    int RowInput;
    int ColumnInput;
    
    cout << "|- BATTLESHIPS -| \n" << "This game is singleplayer. \n" << "The grid is 10x10 with ships being one in size. \n" << "0 = No Ship \n" << "1 = Ship \n";
    int** Playfield = CreateMatrix(10,10);
    int** Logicfield = CreateMatrix(10,10);
    TransformToPlayField(Playfield, 10, 10);
    CreateRandomBoatPlacement(Logicfield);
    

    while (Score < 10) {
        cout << "Type which row: ";
        cin >> RowInput;
        cout << "Type which column: ";
        cin >> ColumnInput;

        if (RowInput > 10 || ColumnInput > 10) {
            cout << "Numbers out of bounds" << endl;
            continue;
        }
        
        if (Logicfield[RowInput][ColumnInput] == 1) {
            cout << "Hit!" << endl;
            Playfield[RowInput][ColumnInput] = 1;
            Score += 1; // it's possible to win the game by repeating the same field
        } else {
            cout << "Miss!" << endl;
            Playfield[RowInput][ColumnInput] = 0;
            }
        

        DrawMatrix(Playfield, 10, 10);
        cout << endl << endl;
    }
    cout << "GAME END";
    return 0;
}
