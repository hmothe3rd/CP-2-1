#include <iostream>

int main() {
    int vowelCount[90] = {0}, whitespaceCount = 0;
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    std::string input;

    std::cout << "Enter a string in all CAPITAL LETTER.\n";
    std::getline(std::cin, input);

    for (char letter : input) {
        for (int i = 0; i < 5; i++) {
            if (letter == vowels[i]) {
                vowelCount[i]++;
                break;
            }
        }

        if (std::isspace(letter)) {
            whitespaceCount++;
        }
    }

    std::cout << "Vowels:";
    for (int i = 0; i < 5; i++) {
        std::cout << "\n" << vowels[i] << " " << vowelCount[i];
    }

    std::cout << "\nWhitespaces - " << whitespaceCount;

    return 0;
}