#include <iostream>
using namespace std;

int Addition(float a, float b) { return a + b; }

int Subtraction(float a, float b) { return a - b; }

int Multiplication(float a, float b) { return a * b; }

int Division(float a, float b) { return a / b; }


int main() {

        string isToContinue;

    do {
        system("cls");

        float num1, num2;
        char insert;

        cout << "Select an arithmetic operator (+, -, *, /): ";
        cin >> insert;
        system("cls");

        cout << " " << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (insert) {
        case '+':
            cout << "Result: " << Addition(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << Subtraction(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << Multiplication(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << Division(num1, num2) << endl;
            break;

        default:
            cout << "Invalid operator. Please select +, -, *, or /." << endl;
        }

        cout << " " << endl;
        cout << "Do you want to check another operation? (Y/N): ";
        cin >> isToContinue;

    } while (isToContinue == "y" || isToContinue == "Y");
           
    return 0;

}


