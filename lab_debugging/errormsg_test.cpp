#include <iostream>
#include <cassert>
// uncomment to disable assert()
// #define NDEBUG

// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert((void(msg), exp))

using namespace std;

//int calculateGrade(int score) { // error return type mismatch
char calculateGrade(int score) { // error return type mismatch (was originally 'int')
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}
int main() {
    int studentScore;
    cout << "Enter student score: ";
    cin >> studentScore;
    if (studentScore < 0) {
        studentScore = -1 * studentScore;
        cout << "Error: Negative studentScore detected! Assuming sign-switched score: " << studentScore << endl;
    }
    assert(studentScore >= 0);
    
    char grade = calculateGrade(studentScore);  // Type mismatch (definition return type used to be 'int')
    cout << "Grade: " << grade << endl;
    // Array access error
    int scores[3] = {85, 92, 78};
    int scoreLength = sizeof(scores) / sizeof(scores[0]);
    //cout << "Score 5: " << scores[5] << endl;  // Out of bounds
    // Fix:
    int scoreIndex = -4;
    if (scoreIndex >= scoreLength || scoreIndex < 0) {
        cout << "Error: trying to access index out of bounds (array size = " << scoreLength << "), returning last score:" << endl;
        cout << "Score #" << scoreLength << ": " << scores[scoreLength - 1] << endl; 
    } else {
        cout << "Score #" << scoreIndex + 1 << ": " << scores[scoreIndex] << endl;  // Out of bounds   
    }
    
    // Uninitialized variable
    int totalPoints = scores[0] + scores[1] + scores[2];
    int averagePoints = totalPoints / 3;
    cout << "Average: " << averagePoints << endl;
    return 0;
}
