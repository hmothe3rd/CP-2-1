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
    while (*s1 != '\0') {
        s1++;
    }
    
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';
}