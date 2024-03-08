#include<iostream>

//Using * Pointer variable holds another memory address or holds a memory address of another variable.
//Address operator = &.
//Ponter operator = *.
//Indirection operator = *.
//Use the * to define pointer variables.

int main () {

std::string food ="Pasta";
std::string *ptr = &food;
std::cout<<food<<" ";
std::cout<<*ptr<<"\n";

    std::cin.ignore();
    std::cin.get();

    return 0;

//     int main () {

// std::string *y, x;

//     std::cin.ignore();
//     std::cin.get();

//     return 0;
// }

}
