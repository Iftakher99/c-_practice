#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Account {
public:
    enum Type {deposite, saving};
    Account(string name, int number, Type type, double init) ;
    void deposit(double amount);
    double withdraw(double amount);
    void display();

private:
    string name;
    int number;
    Type type;
    double balance;    
};

Account::Account(string aname, int anumber, Type atype, double init)
{
    name = aname;
    number = anumber;
    type = atype;
    balance = init > 0.0 ? init : 0;
}

void Account::deposit(double amount)
{
    if (amount < 0.0) {
        cout << "Can't deposite negative amount" << endl;
        amount = 0.0;
    }
    balance += amount;
}

double Account::withdraw(double amount) {
    if (amount < 0.0) {
        cout << "Can't withdraw negative amount" << endl;
        amount = 0.0;
    }
    if (amount > balance) {
        cout << "Not enough funds in the account withdraw only $"
             << fixed <<setprecision(2) << balance << endl;
        amount = balance;
    }
    balance -= amount;
    return amount;
}

void Account::display() {
    cout << name << ": $" << fixed << setprecision(2) << balance << endl;
}

int main() {
    Account account("Smith", 12345, Account::deposite, 100);

    account.deposit(1000);
    account.withdraw(200);
    account.display();
}