#include <iostream>

using namespace std;

int main() {
    // Problem 1: Lost precision in financial calculation
    int dollars = 1000;
    double interestRate = 0.05; //5%
    double interest = static_cast<double>(dollars) * interestRate;
    cout << "Interest earned: $" << interest << endl;
    
    // Problem 2: Unexpected truncation
    double price = 19.99;
    int wholeDollars = static_cast<int>(price);
    double lostCents = price - wholeDollars;
    cout << "Price in whole dollars: $" << wholeDollars << endl;
    cout << "Lost cents: $" << lostCents << endl;
    
    return 0;
}
