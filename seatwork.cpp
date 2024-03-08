#include<iostream>

int main() {
    int input, total;
    double useCount, calculate, payment;
    
    do
    {
        std::cout << "\nHello, what would you like to do?"
                  << "\n1. Pay for Conference Room - 1,000"
                  << "\n2. Pay for Room - 350 Php"
                  << "\n3. Pay for Pool - 100"
                  << "\n4. Exit"
                  << "\nInput: ";
        std::cin >> input;
        system("cls");

        switch (input) {
    
        case 1:
                std::cout << "How many many hours will you use the room? ";
                std::cin >> useCount;

                std::cout << "Enter amount Payment: ";
                std::cin>>payment;
            
                if (useCount == 1) {
                    total = payment - 1000;
                }

                else {
                    calculate = 1000 * useCount;
                    total = payment - calculate;
                }
                        
                std::cout << "Balance: " << total;

            break;

        case 2:
                std::cout << "How many days will you stay? ";
                std::cin >> useCount;

                std::cout << "Enter amount Payment: ";
                std::cin>>payment;
            
                if (useCount == 1) {
                    total = payment - 350;
                }

                else {
                    calculate = 350 * useCount;
                    total = payment - calculate;
                }
                        
                std::cout << "Balance: " << total;

                break;

        case 3:
                std::cout << "for how many people? ";
                std::cin >> useCount;

                std::cout << "Enter amount Payment: ";
                std::cin>>payment;
            
                if (useCount == 1) {
                    total = payment - 100;
                }

                else {
                    calculate = 100 * useCount;
                    total = payment - calculate;
                }
                        
                std::cout << "Balance: " << total;
    
            default:
            break;
        }

        // put balnce outside

    } while (input != 4);
return 0;
}