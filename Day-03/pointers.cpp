// Pointers

// A pointer is a variable that stores the memory address of another variable.

#include <iostream>
using namespace std;

int main (){
    int life = 4;
    life = 5;
    
    int card = 2;
    int myCard = card;

    cout << card << endl;

    // pointer

    int marks = 49;
    int *myPtr;
    myPtr = &card; // referencing
    int valueAtMyPtrAddress = *myPtr; // de-referencing
    cout << valueAtMyPtrAddress << endl;

    return 0;
}