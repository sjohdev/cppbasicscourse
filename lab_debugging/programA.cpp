#include <iostream>

using namespace std;

int main() {
    int score1, score2, score3;
    double average = 0.0;
    cout << "Enter three scores: ";
    cin >> score1 >> score2 >> score3; // Syntax error: missing ';'
    
    average = (score1 + score2 + score3) / 3;
    cout << "Average score: " << average << endl;
    return 0;
}
