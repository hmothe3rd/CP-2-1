#include <iostream>

int countOccurrences(int arr[], int n, int x) {
    int result = 0; 

    for (int i = 0; i < n; i++) {

        if (x == arr[i])
            result++; 
    }

    return result; 
}

int main() {

    int arr[20], x, n, cont=0;

    std::cout << "Enter Array size: ";
    std::cin >> n;
    std::cout << "Enter Array elements:\n";

    for (int i = 0; i < n; i++) {
        
        std::cout << " ";
        std::cin >> arr[i];
    }

    std::cout << "Enter Number to search: ";
    std::cin >> x;
    
    for (int i = 0; i < n; i++) {
        
        if (arr[i] == x) {
            
            cont = 1;
            break;
        }
    }
    
    if (cont == 0) {

        std::cout << "\nElement not found";
    }

    std::cout << "Number of times " << x << " is present in the array: " << countOccurrences(arr, n, x); 

	return 0;
}