#include <iostream>

struct Node {
   int data;
   Node *next;
};

void insert(Node*&, Node*&, int);
void display(Node*);
void UpdateData(Node*, int, int);

int main() {
   int ans, num, position, new_data;
   Node *head = nullptr;
   Node *tail = nullptr;

   do {
      std::cout << "Menu" << std::endl;
      std::cout << "[1] Add Number" << std::endl;
      std::cout << "[2] Update Number" << std::endl;
      std::cout << "[3] View Number" << std::endl;
      std::cout << "[0] Exit" << std::endl;

      std::cin >> ans;

      switch (ans) {
         case 1:
            std::cout << "Enter Number: ";
            std::cin >> num;
            insert(head, tail, num);
            break;

         case 2:
            std::cout << "Position of the node to change: ";
            std::cin >> position;
            std::cout << "\nNew Num: ";
            std::cin >> new_data;
            UpdateData(head, position, new_data);
            break;

         case 3:
            display(head);
            break;

         default:
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
      }

   } while (ans != 0);

   return 0;
}

// Rest of the code remains unchanged

// Create Linked List
void insert(Node *&head, Node *&tail, int num) {
   Node *link = new Node;
   link->data = num;
   link->next = nullptr;

   if (head == nullptr) {
      head = link;
      tail = link;
   } else {
      tail->next = link;
      tail = link;
   }
}

void display(Node *head) {
   Node *ptr = head;
   std::cout << "\n[head] =>";
   while (ptr != nullptr) {
      std::cout << " " << ptr->data << " =>";
      ptr = ptr->next;
   }
   std::cout << " [null]" << std::endl;
}

void UpdateData(Node *head, int position, int new_data) {
   int count = 1;
   Node *tail = head;

   if (head == nullptr) {
      std::cout << "Linked List not initialized" << std::endl;
      return;
   }

   while (tail != nullptr) {
      if (count == position) {
         tail->data = new_data;
         std::cout << "\nNode at position " << position << " updated with " << new_data << std::endl;
         return;
      }

      tail = tail->next;
      count++;
   }

   std::cout << "Position " << position << " does not exist in the list" << std::endl;
}
