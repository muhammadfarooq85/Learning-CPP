#include "iostream"
#include "algorithm"
#include "list"
using namespace std;

int main()
{
    list<int> myList;
    for (int i = 3; i <= 10; i++)
    {
        myList.push_back(i);
    }

    cout << myList.front() << endl;
    cout << myList.back() << endl;

    return 0;
}