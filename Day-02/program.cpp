#include "iostream"
using namespace std;

int main()
{

    int number = 0;
    cout << "Please insert a number: " << endl;
    cin >> number;
    // What is %d?
    // %d is a format specifier used in C-style I/O to print or read a signed integer in decimal form.
    printf("Value is %d \n", number + 3);
    return 0;
}