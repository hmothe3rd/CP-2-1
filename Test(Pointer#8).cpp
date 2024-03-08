#include<iostream>

struct Node {
    
    int data;
    Node *next;
};

int main () {

Node *p;
p = new Node;
p->data=214;
p->data=NULL;

std::cout<<"Data "<<p->data<<std::endl;
return 0;

}