#include<iostream>

//Initializing a varible is defineing and assigning at the same time for one statement...
//Pointers are veribles that hold memory addresses...

int main () {

    int *null = nullptr;         //Initialization...
    int num = 5;
    int *numptr = &num;
    double *null2 = nullptr;
    double num2 = 8.1;
    double *num2ptr = &num2;    //Initialized pointer memAddre2 with memory address of variable num2...

    float num3 = 1.2;
    float *memAddre3 = &num3;
    //this will not work: 
    // float num3 = 1.2;
    // short *s = &num3;...

    int arr[4] = {8, 6, 7, 5};
    int *arrptr = arr;          //Initializing a arrptr with arr... 

    int *nullptr3 = nullptr;
    int *null3 = nullptr3;      //Initializing null3 with the contents of nullptr3...

    int num4 = 44, *ptr = &num;

    std::cin.ignore();
    std::cin.get();

return 0;
}