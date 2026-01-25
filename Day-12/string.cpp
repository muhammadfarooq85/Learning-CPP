#include "iostream"
#include "string"
using namespace std;

string helloApi()
{
    string greeting = "Hello, World!";
    return greeting;
}

int main()
{
    auto message = helloApi();
    cout << message << endl; // Outputs: Hello, World!
    return 0;
}