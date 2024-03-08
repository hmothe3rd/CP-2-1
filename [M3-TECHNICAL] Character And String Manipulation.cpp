#include <iostream>
#include <cstring> 

void NextLetter(char* input) {
    for (int zero = 0; input[zero] != '\0'; zero++) {
        char& letter = input[zero];

        if (letter == 'z') {
            letter = 'a';
        }
        
        else if (letter == 'Z') {
            letter = 'A';
        }

        else if ((letter >= 'a' && letter < 'z') || (letter >= 'A' && letter < 'Z')) {
            letter = letter + 1; 
        }
    }
}

int main() {
    char input[100]; 

    std::cout << "Enter a Word: ";
    std::cin.getline(input, 100); 

    std::cout << "Original String: " << input << std::endl; 

    NextLetter(input); 

    std::cout << "New String: " << input << std::endl; 

    return 0; 
}