#include <iostream>
#include <string>

struct Queue {
    Queue* next = nullptr;
    int number = 0, price, quantity;
    std::string name = "";
};

void MainMenu(int&);
void AddProduct(Queue*&, Queue*&);
void DisplayProductList(Queue*);

int main() {
    int choice;
    Queue* head = nullptr;
    Queue* tail = nullptr;
    int counter = 0; // Counter declared outside the loop

    do {
        system("cls");
        MainMenu(choice);

        switch (choice) {
            case 0:
                exit(0);
            case 1:
                AddProduct(head, tail);
                break;
            case 2:
                std::cout << "Product List:\n";
                DisplayProductList(tail);
                system("pause");
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                system("pause");
        }

counter++;      
    } while (true);

    return 0;
}

void MainMenu(int& choice) {
    std::cout << "1. Add Product\n"
              << "2. Display Items\n"
              << "0. Exit\n"
              << ">> ";

    std::cin >> choice;
    system("cls");
}

void AddProduct(Queue*& head, Queue*& tail) {
    static int counter = 0; // Counter declared as static

    Queue* temp = new Queue;

    if (!counter) { // If counter is 0
        head = new Queue; // head ay gagawa ng bagong queue
        head->next = nullptr; // in head the next will contain null

        // add data
        std::cout << "Enter Item Number: ";
        std::cin >> head->number;

        std::cout << "Item Name: ";
        std::cin >> head->name;

        std::cout << "Item Price: ";
        std::cin >> head->price;

        std::cout << "Item amount: ";
        std::cin >> head->quantity;

        tail = head; // tail is pointing to head
    } 
    
    else { // else counter is not 0
        temp = new Queue; // temp is making new Queue
        temp->next = tail; // in temp there is next where contains tail

        // add data
        std::cout << "Enter Item Number: ";
        std::cin >> temp->number;

        std::cout << "Enter Name: ";
        std::cin >> temp->name;

        std::cout << "Item Price: ";
        std::cin >> temp->price;

        std::cout << "Item amount: ";
        std::cin >> temp->quantity;

        tail = temp; // tail will be updated
    }

    counter++; // Increment counter
}

void DisplayProductList(Queue* tail) {
    if (tail == nullptr) {
        std::cout << "No Items Yet\n";
        return;
    }

    Queue* temp = tail;

    while (temp != nullptr) {
        std::cout << temp->number << ". " << temp->name << " - " << temp->price << "$ - " << temp->quantity << "\n";
        temp = temp->next;
    }
}