// Class Template Example in C++

// This program demonstrates the use of class templates in C++17. It defines a generic class `Box` that can hold a value of any data type.

#include "iostream"
using namespace std;
template <class T>

class box
{
public:
    static T value;               // declaring a variable of type T
    box() : value(v) {} // parameterized constructor
    // writing function to display value
    void display()
    {
        cout << "Value: " << value << endl;
    }
};
template <class T>
T box<T>::value; // defining static variable

int main()
{
    // Syntax: template
    // class name then data type then object name
    box<int> intBox; // creating object of type int
    intBox.display();     // displaying value
    return 0;
}