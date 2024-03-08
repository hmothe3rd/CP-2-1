#include<iostream>

//Using * Pointer variable holds another memory address or holds a memory address of another variable.
//Address operator = &.
//Ponter operator = *.
//Indirection operator = *.
//Use the * to define pointer variables.

int main () {

    int address = 88;
    int sum;
    int testNum = 22;
    //when adding a pointer dont forget to put and *.
    int *num= &testNum, *num2 = &address, *memoryAddressOfSum = &sum;
    //Initalized pointer num2 now holds the memory address of variable address = 88

    //num -> testNum or num is pointing to testNum.
    //  num = &testNum //num is holding the memory address of testNum.
                    //we can use num to access testNum because num has the memory address of testNum.

    std::cout<< num <<std::endl;        //Prints the contents of num.
    std::cout<< testNum <<std::endl;    //Prints the contents of testNum.
    std::cout<< *num <<std::endl;       //Go to the memory location whose address is in num. and access that location. Prints the contents of testNum.

    //You can also change testNum useing the pointer:
    *num = 15;
    //Go to the memory location whose address is in num, access that location and change the memory address(testNum) to 15.

    std::cout<<testNum<<std::endl;
    std::cout<<*num<<std::endl;

    //Add the contents of testNum and address, using pointers. Then store the sum in sum, using a pointer.
    *memoryAddressOfSum = *num2 + *num;
    //*num2 is pointing at address = 88. Because it has its memory address = *num2 = &address.
    //*num is pointing at testNum = 22; . Because it has its memory address = num = &testNum;
    //So 88 + 22 = 110, will moved to pointer *memoryAddressOfSum whose address is in sum. Because *memoryAddressOfSum = &sum

    std::cout<<"sum = "<< sum << std::endl;

    //what is this pointer pointing at?
    // double *something;

    memoryAddressOfSum = nullptr; //0
    num2 = nullptr; //0
    num = nullptr; //0
    //memoryAddressOfSum, num2, and num is now pointing to nothing. They will now be difined as 0 in header files. 
    //Note all momory addresses are positeve integers.
    //This is done so that you do not accidentally de reference a memory location.

    std::cin.ignore();
    std::cin.get();

    return 0;
}
