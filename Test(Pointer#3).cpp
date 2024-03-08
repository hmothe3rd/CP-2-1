#include<iostream>

int main () {

int*foo = new int[5];

foo[0] = 18;

std::cout<<foo[0];
delete[]foo;

    std::cin.ignore();
    std::cin.get();

    return 0;

}
