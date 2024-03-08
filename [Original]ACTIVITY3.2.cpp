#include <iostream>
#include <string>
#include <cstring>

void OverWriteInput(char input1[], char input2[]) { strcpy(input1, input2); }

int main() {

    char input1[100], input2[100]; 

    std::cout << "Enter a first word (str1): ";
    std::cin.getline(input1, 100); 

    std::cout << "Enter a second word (str2): ";
    std::cin.getline(input2, 100);

    OverWriteInput(input1, input2);

    std::cout << "New string value for str1: " << input1;

    return 0;
}