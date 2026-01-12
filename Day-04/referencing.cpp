// Referencing in C++

// Referencing allows you to create an alias for a variable. This means that you can use a different name to refer to the same variable. 
// When you modify the value of the reference, you are actually modifying the value of the original variable.

#include "iostream"
using namespace std;

int main()
{
    int score = 340;
    int *myPtr = &score;
    cout << "Address before change: " << myPtr << endl;

    int &anotherScore = score;
    anotherScore = 30;
    cout << anotherScore << endl;
    cout << score << endl;
    cout << "Address after change: " << myPtr;
    return 0;
}