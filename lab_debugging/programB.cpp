#include <iostream>

using namespace std;

int main() {
    int temperature = 0;
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;
    // Convert to Fahrenheit:
    int fahrenheit = temperature * 9/5 + 32; // Logical error: Formula error
    cout << temperature << " C = " << fahrenheit << " F" << endl;
    return 0;
}
