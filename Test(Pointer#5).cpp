#include<iostream>

struct Node {
    
    int data;
    Node *next;
};


int main () {

Node *p;
p = new Node;
p->data=200;
p->next=NULL;

std::cout<<"Data "<<p->data<<std::endl;
return 0;

}
