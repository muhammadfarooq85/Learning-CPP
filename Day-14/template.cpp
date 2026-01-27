// Template in CPP:

// Template is a feature of C++ that allows functions and classes to operate with generic types. This enables code reusability and type safety. Templates can be defined for functions (function templates) and for classes (class templates). They are instantiated at compile-time, allowing the compiler to generate the appropriate code for the specific data types used.

#include <iostream>
using namespace std;

template <typename T>

T add(T a, T b)
{
    return a + b;
}

int main()
{
    int intResult = add(5, 10);
    double doubleResult = add(5.5, 10.2);

    cout << "Integer Addition: " << intResult << endl;   // Output: 15
    cout << "Double Addition: " << doubleResult << endl; // Output: 15.7

    return 0; 
}