#include "iostream"

using namespace std;

int callByValue(int a)
{
    a = a + 10;
    return a;
}

int callByReference(int *a)
{
    *a = *a + 30;
    return *a;
}



int main()
{
    int a = 10;
    int *hello = &a; // You cannot store value here directly, only address of variable
    // cout << hello << endl;

    cout << callByValue(10) << endl; // 20
    cout << a << endl; // 10
    cout << callByReference(&a) << endl; // 40
    cout << a << endl; // 40

    return 0;
}