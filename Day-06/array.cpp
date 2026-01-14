// Arrays in Cpp

// An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array.

#include <iostream>
using namespace std;

int main()
{
    // Declare an array of integers
    int numbers[] = {10, 20, 30, 40, 50};

    // Access and print the elements of the array
    for (int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    for (int num : numbers)
    {
        cout << "Element: " << num << endl;
    }

    return 0;
}