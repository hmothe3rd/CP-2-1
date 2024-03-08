#include <iostream>
using namespace std;

struct Node {
   int data;
   Node *next;
};

// Create Linked List
void insert(Node *&head, Node *&tail, int num) {
   Node *link = new Node;
   link->data = num;
   link->next = nullptr;

   if (head == nullptr) {
      head = link;
      return;
   }
   tail = head;
   
   while (tail->next != nullptr)
      tail = tail->next;

   tail->next = link;
}

void display(Node *head) {
   Node *ptr = head;
   cout << "\n[head] =>";
   while (ptr != nullptr) {
      cout << " " << ptr->data << " =>";
      ptr = ptr->next;
   }
   cout << " [null]" << endl;
}

void UptadeData(Node *head, int old, int new_data) {
   int count = 1;
   Node *tail = head;

   if (head == nullptr) {
      cout << "Linked List not initialized" << endl;
      return;
   }

   while (tail != nullptr) {
      if (tail->data == old) {
         tail->data = new_data;
         cout << "\n" << old << " found at position " << count << ", replaced with " << new_data << endl;
         return;
      }

      tail = tail->next;
      count++;
   }

   cout << old << " does not exist in the list" << endl;
}

int main() {
   Node *head = nullptr;
   Node *tail = nullptr;

   insert(head, tail, 10);
   insert(head, tail, 20);
   insert(head, tail, 30);
   insert(head, tail, 1);
   insert(head, tail, 40);
   insert(head, tail, 56);

   display(head);
   UptadeData(head, 40, 44);
   display(head);

   return 0;
}
