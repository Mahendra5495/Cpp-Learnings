// Create a class representing a bank account with deposit and withdrawal
// methods
#include <bits/stdc++.h>
using namespace std;
class Bank {
    string name, city, contact, PAN;
    double balance;

   public:
    Bank(string[]);
    double viewBalance();
    string deposit(double);
    string withdrawal(double);
};

int main() {
    string data[] = {"Mahendra", "Pune", "9922467523", "ABCD1234Z"};
    Bank customer = Bank(data);
    cout << "Current Balance: " << customer.viewBalance() << endl;
    cout << customer.deposit(100.0) << endl;
    cout << "Current Balance: " << customer.viewBalance() << endl;
    cout << customer.withdrawal(50) << endl;
    cout << 15;
    return 0;
}
Bank::Bank(string userData[]) {
    name = userData[0];
    city = userData[1];
    contact = userData[2];
    PAN = userData[3];
    balance = 0;
}
double Bank::viewBalance() { return balance; }
string Bank::deposit(double amount) {
    int f = 0;
    {
        balance += amount;
        f++;
    }
    if (f) return to_string(amount) + " Deposited";
    return "Deposit Failed";
}
string Bank::withdrawal(double amount) {
    if (amount > balance) return "Insufficient Balance";
    balance -= amount;
    return to_string(amount) + " Successfully withdrawn";
}
