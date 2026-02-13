#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;

int predicate()
{
    vector<int> marks = {1, 2, 3, 2, 3, 5};

    partition(marks.begin(), marks.end(), [](auto x){ return % 2 == 0; });

    for (int x : marks)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
};

int main()
{
    float marks[6] = {1.3, 3.4, 2.2, 4.3, 1.1, 0.5};
    cout << "Unsorted Values:" << endl;

    for (float n : marks)
    {
        cout << n << " ";
    }
    cout << endl;

    sort(marks, marks + 6);

    if (binary_search(marks, marks + 6, 3.2))
    {
        cout << "Number Found" << endl;
    }
    else
    {
        cout << "Number Not Found" << endl;
    };

    cout << "Sorted Values:" << endl;

    for (float n : marks)
    {
        cout << n << " ";
    }
    cout << endl;

    predicate();
    return 0;
}