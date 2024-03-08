#include <iostream>
#include <cstring> 

// Function to change characters in a string to the next character in the ASCII sequence
std::string change_letter(const std::string& str) {
    std::string modified = str; // Create a copy of the original string

    // Loop through each character in the string
    for (char& c : modified) {
        // Check if the character is 'z', then change it to 'a'
        if (c == 'z')
            c = 'a';
        // Check if the character is 'Z', then change it to 'A'
        else if (c == 'Z')
            c = 'A';
        // Check if the character is an uppercase or lowercase letter
        else if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
            c = c + 1; // Change to the next character in the ASCII sequence
    }

    return modified; // Return the modified string
}

int main() {
    char input[100]; // Buffer to hold user input

    std::cout << "Enter a Word: ";
    std::cin.getline(input, 100); // Read user input

    std::cout << "Original String: " << input << std::endl; // Display original string

    std::string modifiedString = change_letter(input); // Modify the string
    std::cout << "New String: " << modifiedString << std::endl; // Display modified string

    return 0; // Returning 0 to indicate successful execution
}

// Header inclusion:
// These lines include the necessary header files for input-output operations (<iostream>) and string manipulation (<cstring>).

// Function Definition:
// This function NextLetter takes a character array (char*) as input.
// It iterates through each character in the string until it reaches the null terminator ('\0'), which signifies the end of the string.
// For each character in the string:
// If the character is 'z', it changes it to 'a'.
// If the character is 'Z', it changes it to 'A'.
// For any other alphabetic character, it increments it to the next character in the ASCII sequence.
// Note: This function modifies the original string in place.

// Main Function:
// In the main function:
// It declares a character array input of size 100 to store user input.
// It prompts the user to enter a word using std::cout.
// It reads the user input into the input array using std::cin.getline.
// It displays the original string entered by the user.
// It calls the NextLetter function to modify the string in place.
// Finally, it prints the modified string.
// This program allows the user to input a word, modifies it according to the rules defined in the NextLetter function, and then displays the original and modified strings.