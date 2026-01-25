// Enums in CPP:

// Enums in C++ are a user-defined type that consists of a set of named integral constants. They are used to assign names to integral values, making the code more readable and maintainable. Enums can be defined using the `enum` keyword, and starting from C++11, scoped enums can be defined using the `enum class` keyword, which provides better type safety.

#include <iostream>
using namespace std;

int main()
{
    enum Color
    {
        RED = 3,
        GREEN = 5,
        BLUE
    };

    Color myColor = RED;

    cout << "Color value: " << myColor << endl; // Outputs: Color value: 3

    return 0;
}