#include <iostream>
#include <string>

struct Queue {
  	// Address
	Queue* next = NULL;
  	// Data
	int number = 0, price, quantity;
	std::string name = "";
};

void MainMenu(int&);

int main() {
	int choice, counter = 0;
	Queue *head = NULL, *tail = NULL, *temp = NULL;
    
	do {
		system("cls");

		MainMenu(choice);	//Menu

		switch (choice)
		{
		case 0:
            exit(0);
		
        case 1:
			std::cout << "Product Input:\n";
			std::cout << "===========================\n";


			if (!counter)   { 		// If counter is 0
				head = new Queue; 	// head ay gagawa ng bagong queue
				head->next = NULL;	// in head the next will contain null

                // add data
				std::cout << "Enter Iteam Number: ";
				std::cin >> head->number;

				std::cout << "Iteam Name: ";
				std::cin >> head->name;

				std::cout << "Iteam Price: ";
				std::cin >> head->price;				

				std::cout << "Iteam amount: ";
				std::cin >> head->quantity;

				tail = head; 		// tail is pointing to head

			}

			else    { 				// else counter is not 0
				temp = new Queue;	// temp is making new Queue
				temp->next = tail;	// in temp there is next where contains tail

                // add data
				std::cout << "Enter Iteam Number: ";
				std::cin >> temp->number;

				std::cout << "Enter Name: ";
				std::cin >> temp->name;
				
				std::cout << "Iteam Price: ";
				std::cin >> temp->price;	

				std::cout << "Iteam amount: ";
				std::cin >> temp->quantity;

				tail = temp;	// tail will be updated
			}

			counter++; 			// add counter			break;

		case 2:
			std::cout << "Product List:\n";

			temp = tail;	// temp will point to the tail

			if (temp)   {	// if temp is not empty
				do
				{
					std::cout << temp->number << ". " << temp->name << " - " << temp->price<< "$ - " << temp->quantity<<"\n"; // display the data

					if (temp->next == NULL) 								 // if the next is empty break the loop
						break;

					temp = temp->next; 										 // replace temp with the next from temp
				}
				while (true);
			}
			
            else    { // else empty
				std::cout << "No List Yet";
			}

			system("pause");
			break;
		    system("cls");
	    } 
    }while (true);
return 0;
}

void MainMenu(int& choice) {
	std::cout<< "1. Add Product\n"
		 << "2. Display Items\n"
		 << "0. Exit\n"
		 << ">> ";

	std::cin >> choice;
    // Clears the screen
	system("cls");
}
