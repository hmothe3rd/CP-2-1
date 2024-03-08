#include <iostream>
#include <cstring> 

int main() {
    char input[100];
    std::string reversed;

    std::cout << "Enter a string: ";
    std::cin.getline(input, 100); 

    const char* delimiter = " ";
    char* split = strtok(input, delimiter); 

    while (split != nullptr) {
        if (!reversed.empty()) {
            reversed = std::string(split) + " " + reversed; 
        } else {
            reversed = split;
        }
        split = strtok(nullptr, delimiter); 
    }

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}