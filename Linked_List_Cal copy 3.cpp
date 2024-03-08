// #include <iostream>

// struct Node {
//    int data;
//    Node *next;
// };

// // Create Linked List
// void insert(Node *&head, Node *&tail, int num) {
//    Node *link = new Node;
//    link->data = num;
//    link->next = nullptr;

//    if (head == nullptr) {
//       head = link;
//       return;
//    }
//    tail = head;
   
//    while (tail->next != nullptr)
//       tail = tail->next;

//    tail->next = link;
// }

// void display(Node *head) {
//    Node *ptr = head;
//    std::cout << "\n[head] =>";
//    while (ptr != nullptr) {
//       std::cout << " " << ptr->data << " =>";
//       ptr = ptr->next;
//    }
//    std::cout << " [null]" << std::endl;
// }

// void UptadeData(Node *head, int old, int new_data) {
//    int count = 1;
//    Node *tail = head;

//    if (head == nullptr) {
//       std::cout << "Linked List not initialized" << std::endl;
//       return;
//    }

//    while (tail != nullptr) {
//       if (tail->data == old) {
//          tail->data = new_data;
//          std::cout << "\n" << old << " found at position " << count << ", replaced with " << new_data << std::endl;
//          return;
//       }

//       tail = tail->next;
//       count++;
//    }

//    std::cout << old << " does not exist in the list" << std::endl;
// }

// int main() {
//    int num, ans;
//    Node *head = nullptr;
//    Node *tail = nullptr;

// do
// {
//     std::cout<<"Enter Number";
//     std::cin>>num;

//     insert(head, tail, num);
//     display(head);

//     system("pause");
//     return 0;
//     system('cls');

//     std::cout<<"Do you want to add a number?"
//              << "[1]. Yes"
//              << "[2]. No";
//     std::cin>>ans;

// } while (ans < 0 || ans > 2);



//    return 0;
// }
