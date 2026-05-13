#include <iostream>
using namespace std;

class BankAccount
{
    private:
        double balance;

    public:
        BankAccount()
        {
            balance = 0.0;
        }

        void Deposit(double amount)
        {
            balance = balance + amount;
            cout << "\nCurrent balance: RM" << balance;
        }

        void Withdraw(double amount)
        {
            if(amount <= balance)
            {
                balance = balance - amount;
                cout << "\nCurrent balance: RM" << balance;
            }
            else
            {
                cout << "\nInsufficient amount to withdraw";
            }
        }

        double GetBalance()
        {
            return balance;
        }

};

int main()
{
    BankAccount account;

    account.Deposit(1000);
    account.Withdraw(500);
    account.Withdraw(600);
    
    cout << "\nCurrent balance: RM" << account.GetBalance();

    return 0;
}
