#include <iostream>
#include <string>
#include <cctype>

int main()
{
    bool capitalizeNext = true; // Flag to indicate if the next character should be capitalized

    std::string input;
    std::cout << "Enter the String: ";
    std::getline(std::cin, input);

    for (size_t zero = 0; zero < input.length(); ++zero) {
        if (isspace(input[zero])) {
            capitalizeNext = true; // Set flag to capitalize the next character
        } 
        
        else if (capitalizeNext && islower(input[zero])) {
            input[zero] = toupper(input[zero]); // Capitalize the character
            capitalizeNext = false; // Reset the flag
        }
    }

    std::cout << "\nAll words are capitalized successfully!\n";
    std::cout << "The new string is:\n\n";
    std::cout << input << std::endl;

    return 0;
}
