#include <iostream>

int main() {

    int array[10];

    std::cout << "Enter elemnts of the array :";

    for (int i = 0; i < 10; i++)
    {
        std::cin >> array[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (array[i]%2==0)
        {
            std::cout << "\nEven numbers: "<< array[i] << " are located at indices: " << i;
        }
    }
    
	return 0;
}