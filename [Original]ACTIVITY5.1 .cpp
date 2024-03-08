#include <iostream>

void StringCat(char *s1, char *s2);

int main() {
    char str1[20] = "The Happy";
    char str2[20] = " Man";
    StringCat(str1, str2);
    std::cout << str1;
    return 0;
}

void StringCat(char* s1, char* s2) {
    // Move the pointer to the end of s1
    while (*s1 != '\0') {
        s1++;
    }
    // Copy characters from s2 to the end of s1
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    // Add the null terminator to the end of the concatenated string
    *s1 = '\0';
}