#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initial)
    {
        balance = initial;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    bool withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
            return false;
        }
        balance -= amount;
        return true;
    }

    void printBalance() const
    {
        cout << "Balance: $" << balance << endl;
    }
};

// Function taking pointer to BankAccount to deposit money
void depositViaPointer(BankAccount *account, double amount)
{
    account->deposit(amount);
}

// Function taking reference to BankAccount to withdraw money
void withdrawViaReference(BankAccount &account, double amount)
{
    account.withdraw(amount);
}

void swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main()
{
    // Dynamically allocate a BankAccount object with $1000
    BankAccount *myAccount = new BankAccount(1000);

    myAccount->printBalance();

    // Deposit using pointer function
    depositViaPointer(myAccount, 500);
    myAccount->printBalance();

    // Withdraw using reference function
    withdrawViaReference(*myAccount, 200);
    myAccount->printBalance();

    // Try withdrawing more than balance
    withdrawViaReference(*myAccount, 2000);

    delete myAccount; // Free memory

    int a = 10;
    int b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
