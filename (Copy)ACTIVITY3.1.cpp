#include <iostream>
#include <cstring>

int main() {
    char str1[100], str2[100];

    std::cout << "**************"
              << "\nSTRING COMPARE"
              << "\n**************"
              << "\nEnter a first word (str1): ";
    std::cin >> str1;
    std::cout << "\nEnter a second word (str2): ";
    std::cin >> str2;

    int result = strcmp(str1, str2);

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

// #include <iostream>
// #include <string.h>

// int main() {

//     std::string str1, str2;

//     std::cout << "**************"
//               << "\nSTRING COMPARE"
//               << "\n**************"
//               << "\nEnter a first word (str1): ";
//     std::cin >> str1;
//     std::cout << "\nEnter a second word (str2): ";
//     std::cin >> str2;

//     std::result = strcmp(str1, str2)

//     if ( result == 0)   {
//         std::cout << str1 << "is equal to " << str2;    }

//     else if (result < 0)   {
//         std::cout << str1 << "is greater then " << str2;    }

//     else (result > 0)   {
//         std::cout << str1 << "is less then " << str2;   }
// }