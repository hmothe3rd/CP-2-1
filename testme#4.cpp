#include <iostream>

using namespace std;

float Add2Values(float x, float y);

int main()
{
    float x, y;

    cout << "-- Add 2 Values --\n"
         << "Enter x Value: ";

    cin >> x;

    cout << "Enter y Value: ";
    cin >> y;

    cout << "__________________\n";
    
    cout << Add2Values(x, y);

    return 0;
}

float Add2Values(float x, float y)
{
    float sum = x + y;

    return sum;
}
