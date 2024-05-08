//  friend function is a function that is granted special access to
//  the private and protected members of a class

#include <iostream>
using namespace std;

// Forward declaration of the BankAccount class
class BankAccount;

// Declaration of the friend function
void displayBalance(BankAccount account);

// Definition of the BankAccount class
class BankAccount {
private:
    double balance; // Private member representing the account balance

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Declare the friend function as a friend of this class
    friend void displayBalance(BankAccount account);
};

// Definition of the friend function
void displayBalance(BankAccount account) {
    // Accessing the private member balance of BankAccount
    cout << "Current balance: $" << account.balance << endl;
}

int main() {
    // Creating bank account objects
    BankAccount account1(1000.0);
    BankAccount account2(2000.0);

    // Call the friend function to display the balance of each account
    displayBalance(account1);
    displayBalance(account2);

    return 0;
}
