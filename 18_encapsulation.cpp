#include <iostream>
using namespace std;

class BankAccount {
  private:
    int balance;  // 🛑 This is hidden from outside

  public:
    // Constructor to initialize account with 0 balance
    BankAccount() {
      balance = 0;
    }

    // Function to deposit money (setter)
    void deposit(int amount) {
      if (amount > 0) {
        balance += amount;
        cout << "Deposited: ₹" << amount << endl;
      } else {
        cout << "❌ Invalid deposit amount!" << endl;
      }
    }

    // Function to withdraw money
    void withdraw(int amount) {
      if (amount > balance) {
        cout << "❌ Not enough balance! Available: ₹" << balance << endl;
      } else if (amount <= 0) {
        cout << "❌ Invalid withdrawal amount!" << endl;
      } else {
        balance -= amount;
        cout << "Withdrew: ₹" << amount << endl;
      }
    }

    // Function to check balance (getter)
    int getBalance() {
      return balance;
    }
};

int main() {
  BankAccount vjAccount;

  vjAccount.deposit(1000);       // ✅ Good
  vjAccount.withdraw(500);       // ✅ Good
  vjAccount.withdraw(10000);     // ❌ Too much
  vjAccount.deposit(-50);        // ❌ Invalid
  cout << "Current balance: ₹" << vjAccount.getBalance() << endl;

  return 0;
}
