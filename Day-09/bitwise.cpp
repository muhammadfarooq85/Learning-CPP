// Bitwise Operations in C++

// Bitwise operations are used to manipulate individual bits of data. C++ provides several bitwise operators that can be used with integral types (like int, char, etc.). Here are the common bitwise operators:

// 1. AND (&): Performs a bitwise AND operation.
// 2. OR (|): Performs a bitwise OR operation.
// 3. XOR (^): Performs a bitwise XOR operation.
// 4. NOT (~): Performs a bitwise NOT operation (inverts the bits).
// 5. Left Shift (<<): Shifts bits to the left.
// 6. Right Shift (>>): Shifts bits to the right.

#include <iostream>
using namespace std;

int main()
{
    unsigned int x = 6;
    unsigned int y = 9;
    unsigned int z = x & y; // Bitwise AND
    cout << "Bitwise AND of " << x << " and " << y << " is: " << z << endl;

    z = x | y; // Bitwise OR
    cout << "Bitwise OR of " << x << " and " << y << " is: " << z << endl;
    z = x ^ y; // Bitwise XOR
    cout << "Bitwise XOR of " << x << " and " << y << " is: " << z << endl;
    z = ~x; // Bitwise NOT
    cout << "Bitwise NOT of " << x << " is: " << z << endl;
    z = x << 1; // Left Shift
    cout << "Left Shift of " << x << " by 1 is: " << z << endl;
    z = y >> 1; // Right Shift
    cout << "Right Shift of " << y << " by 1 is: " << z << endl;

    return 0;
}
