#include <iostream>

char* StringRez(char* s);

int main() {
    char str[] = "Happy Day";
    std::cout << StringRez(str);
    return 0;
}

char* StringRez(char* s) {
    int length = 0;
    // Calculate the length of the string
    while (s[length] != '\0') {
        length++;
    }

    char* tmp = new char[length + 1]; // Allocate memory for the reversed string

    // Copy characters in reverse order
    for (int i = 0; i < length; i++) {
        tmp[i] = s[length - i - 1];
    }
    tmp[length] = '\0'; // Add the null terminator

    return tmp;
}