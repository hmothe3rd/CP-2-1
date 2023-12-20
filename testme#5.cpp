#include <iostream>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

// Function declaration
float Add2Values(float, float);

int main()
{
    char x, y;

    cout << "-- Add 2 Values --\n"
         << "Enter x Value: ";

    cin >> x;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Enter a numeric value for x: ";
        cin >> x;
    }

    cout << "Enter y Value: ";
    cin >> y;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Enter a numeric value for y: ";
        cin >> y;
    }

    cout << "__________________\n";

    string inputExpression = "ab + 2"; 
    istringstream iss(inputExpression);

    string token;
    while (iss >> token) {
        stringstream ss(token);
        float num;
        if (ss >> num) {
            cout << "Number extracted from input expression: " << num << endl;
            break;  
        }
    }

    cout << Add2Values(x, y);

    return 0;
}

float Add2Values(float x, float y)
{
    float sum = x + y;

    return sum;
}
