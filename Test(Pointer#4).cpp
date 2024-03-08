#include<iostream>

int main () {

int*foo = NULL;

foo = new int;

*foo = 100;

std::cout<<*foo;


    std::cin.ignore();
    std::cin.get();

    return 0;

}
