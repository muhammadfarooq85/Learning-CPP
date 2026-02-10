// Move Semantics in CPP:

// Move semantics is a powerful feature in C++ that allows for the efficient transfer of resources from one object to another without the need for copying. This is particularly useful when dealing with large objects or resources that are expensive to copy, such as dynamic memory, file handles, or network connections.

#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b)
{
    // move function is used here to move the value of a to temp, then move the value of b to a, and finally move the value of temp back to b. This avoids unnecessary copying and can improve performance.
    int temp = move(a); 
    a = move(b);
    b = move(temp);
}

string printMe(){
    return "Hello World!";
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    cout << "a: " << a << ", b: " << b << endl;

    string h = printMe(); // here h is an lvalue that can bind to the temporary string returned by printMe().
    string&& h1 = printMe(); // h1 is an rvalue reference that can bind to the temporary string returned by printMe().

    return 0;
}