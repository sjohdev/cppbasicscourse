#include <iostream>

using namespace std;

int main() {
    int number;
    int result = number * 2; // using uninitialized variable
    int unused_var = 42; // Variable declared but never used
    
    cout << "Enter a number: ";
    cin >> number;
    if (number = 5) { // Assignment instead of comparison
        cout << "You entered Five" << endl;
    }
    cout << "Result: " << result << endl;
    return 0;
}
