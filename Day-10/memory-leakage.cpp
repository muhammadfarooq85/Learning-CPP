// Memory Leakage in C++:

// Memory leakage occurs when dynamically allocated memory is not properly deallocated, leading to wasted memory resources.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Dynamically allocate memory for an array of integers
    int *arr = new int[100]; // decalaring and initializing array of 100 integers

    // Use the allocated memory
    for (int i = 0; i < 100; ++i)
    {
        arr[i] = i;
    }

    // Print the first 10 elements
    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Memory leak occurs here as we forget to deallocate the memory
    // delete[] arr; // Uncommenting this line will prevent the memory leak

    return 0;
}