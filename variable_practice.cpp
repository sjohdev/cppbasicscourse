#include <iostream>

/* Variable Practice Lab: 
KEY POINTS:
- Variable Initialization: Always initialize variables to avoid unpredictable behavior from garbage values
- Constants (const): Use for values that should never change, like game limits, mathematical constants, or configuration settings
- Auto Keyword: Useful when the variable type is obvious from the assigned value, making code cleaner and easier to maintain
- Scope Awareness: Variables are only accessible within their scope (the { } block where they're declared)
*/

int main() {
    // Declare and initialize variables
    int playerLevel = 5;
    double expPoints = 1250.75;
    char difficultyRating = 'B';
    bool hasCompletedTutorial = true;
    
    // Display player info
    std::cout << "Player Profile" << std::endl;
    std::cout << "Level: " << playerLevel << std::endl;
    std::cout << "XP: " << expPoints << std::endl;
    std::cout << "Difficulty: " << difficultyRating << std::endl;
    std::cout << "Completed Turorial: ";
    if (hasCompletedTutorial) { 
        /* Brackets indicate scope => all variables declared 
        inside brackets are unknown outside the brackets*/
        int i = 6;
        std::cout << "Yes!" << std::endl;
        std::cout << "i value = " << i << std::endl;
    } else {
        std::cout << "Nooo" << std::endl;
    }
    for (int j=0; j<3; j++) {
        std::cout << "j = " << j << std::endl;
    }
    // trying to access variables 'i' or 'j' here will result in compilation error:
    //std::cout << "j value = " << j << std::endl;


    // Part 2:
    
    // Constants for game development: 
    const int MAX_PLAYER_LEVEL = 100;
    const double XP_MULTIPLIER = 1.5;
    const char GOLD_TIER_RATING = 'A';
    
    // using auto for type declarations: 
    auto currentScore = 98500; // Compiler deduces int
    auto averagePlayTime = 45.5; // Compiler deduces double
    auto playerInitial = 'M'; // Compiler deduces char
    auto isOnline = false; // Compiler deduces bool   
    return 0;
}
