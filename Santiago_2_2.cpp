#include <iostream>

void Sort(int& a, int&b) {

    int temp = a;
    a = b;
    b = temp;
}

void Sorting(int array[], int input)  {
    for (int i = 0; i < input - 1; i++) {
        for (int o = 0; o < input - i - 1; o++) {
            if (array[o] > array[o + 1]) {
                Sort(array[o], array[o + 1]);
            }
        }
    }
}

int main() {

    const int ARRAY_LIMIT = 100;
    int input, array[ARRAY_LIMIT];

    do {

        std::cout << "Enter Array size: ";
        std::cin >> input;
    
    } while (input <= 0 || input >= 100);

    for (int i = 0; i < input; i++)
    {
        std::cout << "Array Element " << i + 1 << ": ";
        std::cin >> array[i];
    }

    Sorting(array,input);

    std::cout << "The sorted arry is: ";
    for (int i = 0; i < input; i++)
    {
        std::cout << array[i] << " ";
    }

	return 0;
}