#include <iostream>

using namespace std;

int main() {
    int dividend, divisor, result;
    cout << "Enter two numbers for division: ";
    cin >> dividend >> divisor;
    if (divisor == 0) {
        cout << "Error: you cannot divide with zero! Exiting" << endl;
        return 0;
    }
    result = dividend / divisor; // Runtime error if divisor = 0!
    cout << dividend << " / " << divisor << " = " << result << endl;
    return 0;
}
