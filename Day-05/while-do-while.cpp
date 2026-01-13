// While do while loop in C++

// These loops are used to execute a block of code repeatedly based on a condition.

#include <iostream>
using namespace std;

int main()
{
    int count = 1;

    // while loop
    cout << "While Loop:" << endl;
    while (count <= 5)
    {
        cout << "Count is: " << count << endl;
        count++;
    }

    // Reset count for do-while loop
    count = 1;

    // do-while loop
    cout << "Do-While Loop:" << endl;
    do
    {
        cout << "Count is: " << count << endl;
        count++;
    } while (count <= 5);

    int hell[1] = {0};

    while (hell[0] != 1)
    {
        cout << "In while loop, hell[0] = " << hell[0] << endl;
        hell[0] = 1; // Change the condition to exit the loop
    }

    return 0;
}