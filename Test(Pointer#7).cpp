#include<iostream>

int main () {

int *ptr = new int;
*ptr = 24;
delete ptr;

ptr = new int(10);
std::cout<<*ptr;

    std::cin.ignore();
    std::cin.get();

    return 0;

}
