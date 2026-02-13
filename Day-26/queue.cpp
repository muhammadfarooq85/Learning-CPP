#include "iostream"
#include "algorithm"
#include "queue"
using namespace std;

int main()
{
    queue<int> myQueue;
    for (int i = 3; i <= 10; i++)
    {
        myQueue.push(i);
    }

    cout << myQueue.front() << endl;
    cout << myQueue.back() << endl;

    return 0;
}