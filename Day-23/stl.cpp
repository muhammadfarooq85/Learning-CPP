// Standard Template Library (STL) example in C++17

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> inty;
    // push back some integers
    inty.push_back(5);
    inty.push_back(10);

    for (auto i : inty)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << inty[0] << endl;

    return 0;
}