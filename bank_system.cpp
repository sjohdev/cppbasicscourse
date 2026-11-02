/*
 * Bank Account System
 * This program simulates a simple banking system with accounts, deposits,
 * withdrawals, interest calculations, and currency conversion.
 *
 * WARNING: This code contains multiple type conversion issues that need to be fixed!
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
#include <limits>

using namespace std;

// Global constants
#define MAX_ACCOUNTS 100
#define MAX_BALANCE 1000000

// Currency conversion rates (as of a fictional date)
float USD_TO_EUR = 0.85f;
float USD_TO_JPY = 110.0f;
float EUR_TO_USD = 1.18f;
float EUR_TO_JPY = 129.5f;
float JPY_TO_USD = 0.0091f;
float JPY_TO_EUR = 0.0077f;

// Account structure
struct Account {
    int accountNumber;
    string ownerName;
    double balance;
    char accountType;  // 'S' for Savings, 'C' for Checking
};

// Function prototypes
void displayMenu();
Account createAccount(int accountNum);
void deposit(Account& account, int amount);
bool withdraw(Account& account, int amount);
double calculateInterest(Account account, int days);
float convertCurrency(double amount, char fromCurrency, char toCurrency);
void displayAccountSummary(const Account& account);
void testBoundaryConditions();

// Vector to store accounts
vector<Account> accounts;

int main() {
    cout << "===== BANK ACCOUNT SYSTEM =====" << endl;
    cout << "This program demonstrates a simple banking system." << endl;
    cout << "NOTE: This code contains type conversion issues that need to be fixed!" << endl;
    cout << endl;

    int choice;
    int accountCounter = 100; // Starting account number

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                // Create a new account
                if (accounts.size() < MAX_ACCOUNTS) {
                    Account newAccount = createAccount(accountCounter++);
                    accounts.push_back(newAccount);
                    cout << "Account created successfully!" << endl;
                    displayAccountSummary(newAccount);
                } else {
                    cout << "Maximum number of accounts reached." << endl;
                }
                break;
            }

            case 2: {
                // Deposit money
                int accNum, amount;
                cout << "Enter account number: ";
                cin >> accNum;

                bool found = false;
                for (int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].accountNumber == accNum) {
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        deposit(accounts[i], amount);
                        cout << "Deposit successful!" << endl;
                        displayAccountSummary(accounts[i]);
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }

            case 3: {
                // Withdraw money
                int accNum, amount;
                cout << "Enter account number: ";
                cin >> accNum;

                bool found = false;
                for (int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].accountNumber == accNum) {
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        if (withdraw(accounts[i], amount)) {
                            cout << "Withdrawal successful!" << endl;
                            displayAccountSummary(accounts[i]);
                        } else {
                            cout << "Insufficient funds or invalid amount." << endl;
                        }
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            
            case 4: {
    // Calculate interest
    int accNum, days;
    cout << "Enter account number: ";
    cin >> accNum;

    bool found = false;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accNum) {
            cout << "Enter number of days: ";
            cin >> days;

            double interest = calculateInterest(accounts[i], days);
            cout << "Interest earned after " << days << " days: $" << interest << endl;
            cout << "Updated balance with interest: $" << accounts[i].balance + interest << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Account not found." << endl;
    }
    break;
}

case 5: {
    // Convert currency
    int accNum;
    char fromCurr, toCurr;
    cout << "Enter account number: ";
    cin >> accNum;

    bool found = false;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accNum) {
            cout << "Available currencies: U (USD), E (EUR), J (JPY)" << endl;
            cout << "From currency (U/E/J): ";
            cin >> fromCurr;
            cout << "To currency (U/E/J): ";
            cin >> toCurr;

            float convertedAmount = convertCurrency(accounts[i].balance,
                                                    toupper(fromCurr),
                                                    toupper(toCurr));

            cout << "Converted amount: ";
            switch (toupper(toCurr)) {
                case 'U': cout << "$"; break;
                case 'E': cout << "€"; break;
                case 'J': cout << "¥"; break;
            }
            cout << convertedAmount << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Account not found." << endl;
    }
    break;
}

case 6: {
    // Display all accounts
    if (accounts.empty()) {
        cout << "No accounts to display." << endl;
    } else {
        cout << "\n===== ACCOUNT SUMMARIES =====" << endl;
        for (const Account& acc : accounts) {
            displayAccountSummary(acc);
            cout << "-----------------------------" << endl;
        }
    }
    break;
}

case 7: {
    // Test boundary conditions
    testBoundaryConditions();
    break;
}

case 8:
    cout << "Exiting program. Thank you!" << endl;
    break;

default:
    cout << "Invalid choice. Please try again." << endl;
}

cout << endl;
} while (choice != 8);

return 0;
}

// Function to display the main menu
void displayMenu() {
    cout << "\n===== MENU =====" << endl;
    cout << "1. Create a new account" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Calculate interest" << endl;
    cout << "5. Convert currency" << endl;
    cout << "6. Display all accounts" << endl;
    cout << "7. Test boundary conditions" << endl;
    cout << "8. Exit" << endl;
}

// Function to create a new account
Account createAccount(int accountNum) {
    Account newAccount;
    newAccount.accountNumber = accountNum;

    cout << "Enter account owner name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, newAccount.ownerName);

    cout << "Enter initial balance: $";
    double initialBalance;
    cin >> initialBalance;

    // Convert double to float and then back to double - potential precision loss!
    float tempBalance = initialBalance;
    newAccount.balance = tempBalance;

    cout << "Enter account type (S for Savings, C for Checking): ";
    cin >> newAccount.accountType;

    return newAccount;
}

// Function to withdraw money into an account
void deposit(Account& account, int amount) {
    // Problem: int amount is added to a double
    if (amount > 0) {
        account.balance += amount;
    } 
}

// Function to withdraw money from 
bool withdraw(Account& account, int amount) {
    // Problem: int amount is subtracted from a double
    if (amount > 0 && amount <= account.balance) {
        account.balance -= amount;
        return true;
    }
    return false;
}

// Function to calculate interest for a given number of days
double calculateInterest(Account account, int days) {
    // Interest rates (annual)
    double rate;
    
    if (account.accountType == 'S') {
        rate = 0.03; // 3%
    } else {
        rate = 0.01; // 1%
    }
    
    // Problem: days is converte to float in division
    float dailyRate = rate / 365;
    
    // Problem: mixing double, float and int in calculation
    double interest = account.balance * dailyRate * days;
    
    // Truncate interest to 2 decimal places (cents)
    int centsInterest = static_cast<int>(interest * 100);
    return centsInterest / 100.0;
}

// Function to convert between currencies
float convertCurrency(double amount, char fromCurrency, char toCurrency) {
    // Problem: double amount converted to float result
    float result = amount;
    
    if (fromCurrency == toCurrency) {
        return result;
    }
    
    // COnvert from source currency to USD as an intermediate step
    if (fromCurrency == 'E') { // From JPY
        result *= EUR_TO_USD;
    } else if (fromCurrency == 'J') {
        result *= JPY_TO_USD;    
    }
    
    // Convert from USD to target currency
    if (fromCurrency != 'U' && toCurrency == 'U') {
        // Already converted to USD
    }else if (toCurrency == 'E') {
        result *= USD_TO_EUR;
    } else if(toCurrency == 'J') {
        result *= USD_TO_JPY;
    }
    
    // Problem: potential truncation when converting to float
    return result;
}

// Function to display account summary
void displayAccountSummary(const Account& account) {
    cout << "\nAccount Number: " << account.accountNumber << endl;
    cout << "Owner: " << account.ownerName << endl;
    cout << "Type: " << (account.accountType == 'S' ? "Savings" : "Checking") << endl;
    cout << "Balance: $" << fixed << setprecision(2) << account.balance << endl;
}


// Function to test boundary conditions
void testBoundaryConditions() {
    cout << "\n==== TESTING BOUNDARY CONDITIONS ====" << endl;
    
    // Create a test account
    Account testAccount;
    testAccount.accountNumber = 999;
    testAccount.ownerName = "Test Account";
    testAccount.balance = 1000.0;
    testAccount.accountType = 'S';
    
    cout << "Initial test account:" << endl;
    displayAccountSummary(testAccount);
    
    // Test 1: Large deposit
    int largeAmount = 2000000000;
    cout << "\nTest 1: Large deposit of $" << largeAmount << endl;
    
    // Problem: This might overflow or exceed MAX_BALANCE
    deposit(testAccount, largeAmount);
    cout << "After large deposit:" << endl;
    displayAccountSummary(testAccount);
    
    // Test 2: Decimal precision
    testAccount.balance = 100.0;
    double rate = 0.03333333;
    
    // Problem: Potential precision loss when converting double to float
    float dailyRate = rate / 365;
    
    // Problem: Mixing types in calculation
    double interest = testAccount.balance * dailyRate * 30;
    
    cout << "\nTest 2: Decimal precision" << endl;
    cout << "Interest rate: " << rate * 100 << "%" << endl;
    cout << "Daily rate: " << dailyRate << endl;
    cout << "Interest for 30 days: $" << interest << endl;
    
    // Test 3: Currency conversion precision
    double largeBalance = 1000000.0;
    
    // Problem: Converting large double to float for currency conversion
    float eurAmount = convertCurrency(largeBalance, 'U', 'E');
    float jpyAmount = convertCurrency(largeBalance, 'U', 'J');
    float jpyAmount2 = convertCurrency(largeBalance, 'E', 'J');
    
    float newAmount =  convertCurrency(eurAmount, 'E', 'U');
    float newAmount2 =  convertCurrency(jpyAmount, 'J', 'U');
    
    
    cout << "\nTest 3: Currency conversion precision" << endl;
    cout << "Original amount: $" << largeBalance << endl;
    cout << "Converted to EUR: €" << eurAmount << endl;
    cout << "Converted to JPY: €" << jpyAmount << endl;
    cout << "Converted from EUR to JPY: €" << jpyAmount2 << endl;
    cout << "\nOriginal amount: $" << static_cast<float>(largeBalance) << endl;
    cout << "New amount #1: $" << newAmount << endl;
    cout << "New amount #2: $" << newAmount2 << endl;
    
    // Test 4: Integer overflow
    int maxInt = numeric_limits<int>::max();
    int smallInt = 100;
    
    // Problem: This will overflow
    int overflowResult = maxInt + smallInt;
    
    cout << "\nTest 4: Integer overflow" << endl;
    cout << "Maximum integer value: " << maxInt << endl;
    cout << "Small integer to add: " << smallInt << endl;
    cout << "Result of addition: " << overflowResult << endl;
}



































































