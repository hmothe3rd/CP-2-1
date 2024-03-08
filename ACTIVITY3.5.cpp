#include <iostream>
#include <string>
#include <cctype>

int main()
{
    bool capitalizeNext = true;

    std::string input;
    std::cout << "Enter the String: ";
    std::getline(std::cin, input);

    for (size_t zero = 0; zero < input.length(); ++zero) {
        if (isspace(input[zero])) {
            capitalizeNext = true;
        } 
        
        else {
            if (capitalizeNext && isalpha(input[zero])) { 
                input[zero] = toupper(input[zero]);
                capitalizeNext = false;
            } 
            
            else {
                input[zero] = tolower(input[zero]);
            }
        }
    }

    std::cout << input << std::endl;

    return 0;
}