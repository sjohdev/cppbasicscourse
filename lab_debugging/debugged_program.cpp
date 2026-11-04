#include <iostream>
#include <cassert>

using namespace std;

int main() {
    cout << "=== Simple Banking Calculator ===" << endl;
    double balance = 1000.0;
    double annualInterest = balance * 0.02;
    int choice = 4; // not initialized, fixed
    double amount = 0.0; // not initialized, fixed
    bool continueOperations = true;
    while (continueOperations == true) { // Assignment instead of comparison
        cout << "\nCurrent Balance: $" << balance << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdrawal" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice; 
        // No input validation, fixed below:
        if (choice < 1 || choice > 4) {
            cout << "Error: invalid input detected, input must be integer in range 1-4" << endl;
            continue;
        }
        assert(choice > 0 && choice < 5);
        
        switch (choice) {
            case 1:
                cout << "Enter deposit amount: $";
                cin >> amount;
                if (amount > 0.0) {
                    balance = balance + amount; // Wrong operation (- instead of +, fixed)
                    cout << "Deposited $" << amount << endl;
                    // Update interest calculation: 
                    annualInterest = balance * 0.02;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;
            case 2:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance = balance - amount;
                    cout << "Withdrew $" << amount << endl;
                    // Update interest calculation: 
                    annualInterest = balance * 0.02;
                } else if (amount > balance) {
                    cout << "Insufficient funds!" << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;
            case 3:
                cout << "Current balance: $" << balance << endl;
                break;
            case 4:
                continueOperations = false;
                cout << "Thank you for banking with us!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        // Display interest (2% annually)
        cout << "Annual interest earned: $" << annualInterest << endl;
    }
    return 0;
}

