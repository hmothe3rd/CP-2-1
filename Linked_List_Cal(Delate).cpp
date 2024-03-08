#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

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
    cout << "\n[head] =>";
    while (ptr != nullptr) {
        cout << " " << ptr->data << " =>";
        ptr = ptr->next;
    }
    cout << " [null]" << endl;
}

void delete_last_element(Node *&head, Node *&tail) {
    if (head == nullptr) {
        cout << "Linked list is empty" << endl;
        return;
    }
    Node *ptr = head;
    Node *prev = nullptr;
    while (ptr->next != nullptr) {
        prev = ptr;
        ptr = ptr->next;
    }
    if (prev == nullptr) {
        head = nullptr;
        tail = nullptr;
    } else {
        prev->next = nullptr;
        tail = prev;
    }
    delete ptr;
}

int main() {
    Node *head = nullptr;
    Node *tail = nullptr;

    insert(head, tail, 10);
    insert(head, tail, 20);
    insert(head, tail, 30);
    insert(head, tail, 40);
    insert(head, tail, 50);

    cout << "Before deleting last element" << endl;
    display(head);
    delete_last_element(head, tail);
    cout << "After deleting last element" << endl;
    display(head);

    return 0;
}
