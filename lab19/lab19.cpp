//MaryDalke
//11-8-16
//program for creating usernames

#include <iostream>
#include <ios>
#include <iomanip>
#include <fstream>
using namespace std;

int main ()
{
    ifstream inFS;
    int fileNum1 = 0;
    int fileNum2 = 0;
    
    cout << "Opening file input.txt." << endl;
    
    inFS.open("input.txt");
    if (!inFS.is_open())
    {
        cout << "Could not open file input.txt." << endl;
        return 1;
    }
    
    cout << "Reading two integers." << endl;
    inFS >> fileNum1;
    inFS >> fileNum2;
    cout << "Closing file input.txt." << endl;
    inFS.close();
    
    cout << "num1: " << fileNum1 << endl;
    cout << "num2: " << fileNum2 << endl;
    cout << "num1 + num2: " << (fileNum1 + fileNum2) << endl;
    
    return 0;
}