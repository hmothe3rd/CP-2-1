#include <iostream>
using namespace std;

struct Node {
   
   int data;
   Node *next;
};


Node *head = nullptr;       //Mali go to Update
Node *current = nullptr;    //Mali go to Update

// Create Linked List
void insert(int data) {
   // Allocate memory for new node
   Node *link = new Node;

   link->data = data;
   link->next = nullptr;

   // If head is empty, create new list
   if (head == nullptr) {
      head = link;
      return;
   }

   current = head;

   // Move to the end of the list
   while (current->next != nullptr)
      current = current->next;

   // Insert link at the end of the list
   current->next = link;
}

void display() {
   Node *ptr = head;

   cout << "\n[head] =>";
   // Start from the beginning
   while (ptr != nullptr) {
      cout << " " << ptr->data << " =>";
      ptr = ptr->next;
   }

   cout << " [null]" << endl;
}

void update_data(int old, int new_data) {
   int pos = 0;

   if (head == nullptr) {
      cout << "Linked List not initialized" << endl;
      return;
   }

   current = head;
   while (current != nullptr) {
      if (current->data == old) {
         current->data = new_data;
         cout << "\n" << old << " found at position " << pos << ", replaced with " << new_data << endl;
         return;
      }

      current = current->next;
      pos++;
   }

   cout << old << " does not exist in the list" << endl;
}

int main() {
  
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56);

   display();
   update_data(40, 44);
   display();

   return 0;
}
