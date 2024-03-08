

 #include <iostream>
#include <cstdlib>

 int main() {
     int stored = 1000;
//     int num;
//     char insert, continueChoice = 'y', choice;

     do {
         std::cout << "--- Please Select choice ---\n"
                   << "1. Start\n"
                   << "2. Exit\n";
         std::cin >> choice;

         if (choice == '2') {
             break;
         }

         do {
             std::cout << "Select an operation:\n"
                       << "1. Add\n"
                       << "2. Subtract\n";
             std::cin >> insert;
             system("cls");

             std::cout << "Enter the amount to be added or subtracted: ";
             std::cin >> num;

             switch (insert) {
                 case '1':
                     stored += num;
                     break;
                 case '2':
                     stored -= num;
                     break;
                 default:
                     std::cout << "Invalid operator. Please select + or -\n";
             }

             std::cout << "Balance: " << stored << "\n";
             std::cout << "Do you want to perform another operation? [y/n]: ";
             std::cin >> continueChoice;

             if (continueChoice = 'n') {
                 std::cout << "Thank you\n";
                 exit(0);
             }

         } while (continueChoice == 'y');

     } while (true);

     std::cout << "Thank you\n";
     return 0;
 }


// // #include <iostream>
// // #include <math.h>

// // int main() {

// // 	int stored = 1000;
// // 	int num;
// // 	char insert, continueChoice, choice;



// // 	do
// // 	{
// // 		std::cout
// // 			<< "--- Please Select choice ---\n"
// // 			<< "1. start\n"
// // 			<< "2. Exit\n";

// // 		std::cin >> choice;

// // 		if (choice == '2') { break; }

// // 		do
// // 		{

// // 			std::cout << "Select a number: "		
// //             << "1. add\n"
// // 			<< "2. sub\n";
// // 			std::cin >> insert;
// // 			system("cls");

// // 			std::cout << "Enter the first number: ";
// // 			std::cin >> num;

// // 			switch (insert) {

// // 			case '1':
// // 				std::cout << "Balance: " << stored += num;
// // 				break;

// // 			case '2':
//  				std::cout << "Balance: " << stored -= num;
//  				break;

//   			default:
//   				std::cout << "Invalid operator. Please select +, -";
//   			}

//   			std::cout << "\nDo you want to compute again? [y/n]:";
//   			std::cin >> continueChoice;

//  			if (continueChoice == 'n') {
//  				exit(0);
//   			}

//   		} while (continueChoice =='y');

//   	} while (true);

//  	std::cout << "thank you";
//  	return 0;
// }