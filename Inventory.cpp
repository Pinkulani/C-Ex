// Emilia @ 14.7.2023

#include <iostream>
#include <fstream>
using namespace std;

ofstream ReadMe ("ReadMe.txt");
ofstream TestFile ("Test.txt");
ofstream WriteTest ("WriteTest.emilia");

void Test() {
  if (ReadMe.is_open())
  {
    ReadMe << "Version: 0.01";
    ReadMe.close();
  } else cout << "Unable to open file";
}

void Write() {
  string Input;
  int Counter = 0;
  WriteTest.is_open();
  while (Counter < 10) {
   cout << "Type something: ";
   cin >> Input; 
   WriteTest << Input << endl;
   Counter++;
  }
  WriteTest.close();
}

void Read() {
  string Line;
  ifstream WriteTest ("WriteTest.emilia");
  if (WriteTest.is_open())
  {
    while (getline(WriteTest,Line))
    {
      cout << Line << endl;
    }
    WriteTest.close();
  } else cout << "Unable to open file";
}

void Append(string filename) {
  string Input;
  int Counter = 0;
  ofstream file(filename.c_str(), ios::app);
  while (Counter < 10) {
   cout << "Type something: ";
   cin >> Input; 
   file << Input << endl;
   Counter++;
  }
  file.close();
}


int main () {
  cout << "|- Emilia's Inventory -|" << endl;
  if (TestFile.is_open())
  {
    TestFile << "Hello. \n";
    TestFile << "OwO. \n";
    TestFile.close();
  } else cout << "Unable to open file";
  
  Test();
  Write();
  Read();
  Append("WriteTest");
  Read();
  return 0;
}
