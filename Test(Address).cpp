#include<iostream>

//Address Operator?? is rhe address of the first bit of your variable
//Address Operator = &
//using New & Delete

int main () {
    int num;

    num = 25;

    std::cout<<"The memory address of x is " << &num <<std::endl;
    std::cout<<"The contents of x is " << num <<std::endl;
    std::cout<<"The size of x is " << sizeof(num) <<std::endl;

    std::cin.ignore();
    std::cin.get();

    return 0;
}

// what is the importance of size here?
// what is size?
// other function like sizeof
