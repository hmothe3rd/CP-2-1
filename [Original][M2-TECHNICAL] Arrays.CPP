// #include <iostream>


// int count_occurrences(int arr[], int n, int x)
// {
//     int result = 0; // Variable to store the count of occurrences

//     // Loop through each element in the array
//     for (int i = 0; i < n; i++)
//     {
//         // Check if the current element is equal to 'x'
//         if (x == arr[i])
//             result++; // Increment the count if the element matches 'x'
//     }
//     return result; // Return the total count of occurrences
// }

// int main() {

//     int arr[20], x, n, cont=0;

//     std::cout << "Enter Array size: ";
//     std::cin >> n;
//     std::cout << "Enter Array elements:\n";

//     for (int i = 0; i < n; i++) {
        
//         std::cout << " ";
//         std::cin >> arr[i];
//     }

//     std::cout << "Enter Number to search: ";
//     std::cin >> x;
    
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == x) {
            
//             cont = 1;
//             pos = i+1;
//             break;
//         }
        
//     }
    
//     if (cont == 0) {
//         std::cout << "\nElement not found";
//     }

//     std::cout << "Number of times " << x << " is present in the array " << count_occurrences(arr, n, x); // Call function to count occurrences of 'x'


// 	return 0;
// }