#include <iostream>

using namespace std;

class BankAccount {
private:
string accountHolderName;
int accountNumber;
double balance;
public:
// Constructor to initialise the bank account
BankAccount(string name, int accNumber, double initialBalance) {
accountHolderName = name;
accountNumber = accNumber;
balance = initialBalance;
}
// Method to deposit money
void deposit(double amount) {
if (amount > 0) {
balance += amount;
cout << "Deposited: " << amount << " Rupees" << endl;
} else {
cout << "Invalid deposit amount!" << endl;
}
}
// Method to withdraw money
void withdraw(double amount) {
if (amount > 0 && amount <= balance) {
balance -= amount;
cout << "Withdrawn: " << amount << " Rupees" << endl;
} else {
cout << "Invalid or insufficient funds for withdrawal!" <<
endl;
}
}
// Method to display account details
void displayAccountDetails() {cout << "Account Holder: " << accountHolderName << endl;
cout << "Account Number: " << accountNumber << endl;
cout << "Current Balance: " << balance << " Rupees" << endl;
}
};
int main() {
// Creating a bank account with an initial balance of 1000 Rupees
BankAccount account1("Rahul", 12345, 1000);
// Display initial account details
account1.displayAccountDetails();
cout << endl;
// Deposit 500 Rupees
account1.deposit(500);
account1.displayAccountDetails();
cout << endl;
// Withdraw 200 Rupees
account1.withdraw(200);
account1.displayAccountDetails();
cout << endl;
// Attempt to withdraw 1500 Rupees (should fail due to insufficient funds)
account1.withdraw(1500);
account1.displayAccountDetails();
return 0;
}