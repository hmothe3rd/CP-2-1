#include <iostream>
#include <cstring> 

// Function to reverse positions of words in a string
void reverseWords(const char* input, std::string& reversed) {
    const char* delimiter = " ";
    char* split = strtok(const_cast<char*>(input), delimiter); // Use strtok directly

    while (split != nullptr) {
        if (!reversed.empty()) {
            reversed = std::string(split) + " " + reversed; // Convert char* to string
        } else {
            reversed = split;
        }
        
        split = strtok(nullptr, delimiter); // Use strtok directly
    }
}

// Driver code
int main() {
    char input[100];
    std::string reversed;

    std::cout << "Enter a string: ";
    std::cin.getline(input, 100); 

    // Pass 'reversed' by reference to store the reversed string
    reverseWords(input, reversed);

    // Print the reversed string
    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}
