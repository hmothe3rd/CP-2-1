#include <iostream>
#include <cstring>

int main() {
    int length; 
    char input[100];
    bool isPalindrome = true;

    std::cout << "Enter a word: ";
    std::cin.getline(input, 100);

    length = strlen(input); 

    for (int zero = 0; zero < length / 2; zero++) {
        if (input[zero] != input[length - 1 - zero]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        std::cout << input << " is a palindrome";
    } 
    
    else {
        std::cout << input << " is not a palindrome";
    }

    return 0;
}
