// Try Catch in CPP

// Try and Catch block is used to handle exceptions in C++ programming language.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw "Division by zero condition!";
        }
        else
        {
            cout << "Result: " << a / b << endl;
        }
    }
    catch (const char*msg)
    {
        cerr << "Error: " << msg << endl;
    } catch (int e)
    {
        cerr << "Integer exception: " << e << endl;
    } catch (...)
    {
        cerr << "Unknown exception occurred!" << endl;
    }

    return 0;
} 