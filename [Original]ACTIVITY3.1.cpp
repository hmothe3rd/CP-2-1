#include <iostream>
#include <string>
#include <cstring>

void CompareString(char input1[], char input2[], int& result ) { result = strcmp (input1, input2); }

int main() {
    int result; 
    char input1[100], input2[100];

    std::cout << "**************"
              << "\nSTRING COMPARE"
              << "\n**************"
              << "\nEnter a first word (str1): ";
    std::cin.getline(input1, 100);
    std::cout << "\nEnter a second word (str2): ";
    std::cin.getline(input2, 100);

    CompareString (input1, input2, result);

    if (result == 0) {
        std::cout << "equal";
    } 
    
    else if (result > 0) {
        std::cout << "Positive";
    } 
    
    else {
        std::cout << "Negative";
    }

    return 0;
}