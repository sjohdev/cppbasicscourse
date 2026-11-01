#include <iostream>

using namespace std;

int main() {
    // Variable declarations
    int totalPoints = 95;
    int numTests = 3;
    double average1 = totalPoints/numTests; // implicit type conversion
    double average2 = static_cast<double>(totalPoints) / numTests;
    double average3 = totalPoints / static_cast<double>(numTests);
    double preciseValue = 99.99;
    int truncated = static_cast<int>(preciseValue); // always floors towards zero
    char grade = 'A';
    int gradeValue = grade; // implicit ASCII conversion
    
    // integer division example
    cout << "Average score (implicit): " << average1 << endl;
    cout << "Average score (explicit numerator): " << average2 << endl;
    cout << "Average score (explicit denominator): " << average3 << endl;
    // character to integer conversion
    cout << "ASCII value of '" << grade << "': " << gradeValue << endl;
    
    cout << "Precise value: " << preciseValue << endl;
    cout << "Truncated value: " << truncated << endl;
    
    return 0;
}
