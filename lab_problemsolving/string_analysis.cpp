
#include <iostream>
#include <string>
#include <algorithm>

// function declarations
void displayResults(int vowelCount, int consonantCount, std::string reverseString, bool isPalindrome);
bool isLetter(char letter);
bool isVowel(char letter);

int main() {
    // Initialize variables
    int vowelCount = 0;
    int consonantCount = 0;
    bool isPalindrome = false;
    std::string userString;
    
    // Prompt user for input text: 
    std::cout << "Write text to analyze here: ";
    std::getline(std::cin, userString);
    if (std::cin.fail()) { // Error handling if user breaks cin with invalid input
        std::cout << "Error: cin failed due to invalid input, exiting application" << std::endl;
        return 0;
    }
    
    // count vowels and consonants in string:
    for (char letter : userString) {
        if (!isLetter(letter)) {
            // Skip to next character in string if current character is not a letter
            continue;
        }
        if (isVowel(letter)) {
            vowelCount++;
        } else {
            consonantCount++;
        }
    }
    
    // Create reverse string: 
    std::string originalString = userString;
    std::reverse(userString.begin(), userString.end());
    std::string reverseString = userString;
    
    // Check if the string is the same backwards: 
    isPalindrome = (reverseString == originalString);
    
    // Display vowel count, consonant count, reversed string and if its a palindrome
    displayResults(vowelCount, consonantCount, reverseString, isPalindrome);
    return 0;
}

void displayResults(int vowelCount, int consonantCount, std::string reverseString, bool isPalindrome) {
    std::cout << "#vowels: " << vowelCount << std::endl;
    std::cout << "#consonants: " << consonantCount << std::endl;
    std::cout << "reverse string: " << reverseString << std::endl;
    if (isPalindrome) {
        std::cout << "Yes, the string is a palindrome" << std::endl;        
    } else {
        std::cout << "Nope, the string is Not a palindrome" << std::endl;
    }
}

bool isLetter(char letter) {
    // Convert letter to ascii number
    int ascii = static_cast<int>(letter);
    
    // Check for lower-case letter (see ascii table)
    if (ascii > 96 && ascii < 123) {
        return true;
    }
    // Check for upper-case letter (see ascii table)
    if (ascii > 64 && ascii < 91) {
        return true;
    }
    return false;
}

bool isVowel(char letter) {
    // Convert letter to ascii number
    int ascii = static_cast<int>(letter);
    
    // Check if input is a valid letter: 
    if (ascii > 96 && ascii < 123) {
        // Letter is a lower-case letter:
        // ascii vowels, lower-case: 97, 101, 105, 111, 117, 121        
        int asciiVowelList[6] = {97, 101, 105, 111, 117, 121};
        // Check if the letter is any of the ascii vowels: 
        for (int asciiVowel : asciiVowelList) {
            if (ascii == asciiVowel) {
                return true;
            }
        }
    } else if (ascii > 64 && ascii < 91) {
        // Letter is upper-case:
        // ascii vowels, upper-case: 65, 69, 73, 79, 85, 89
        int asciiVowelList[6] = {65, 69, 73, 79, 85, 89};
        // Check if the letter is any of the ascii vowels: 
        for (int asciiVowel : asciiVowelList) {
            if (ascii == asciiVowel) {
                return true;
            }
        }
    } else {
        // character is not a letter:
        return false;
    }
    return false;
}

