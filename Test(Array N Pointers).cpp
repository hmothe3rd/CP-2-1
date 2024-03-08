#include<iostream>

//Pointer * are variable that hold memory addresses...
//You can not change what the array is storing... 

int main () {
    int arr[] = { 8, 6, 7, 5 };
    int num = 3;
    int *memAddre = &num;

    //assassigning the contents of arr to memAddre
    memAddre = arr;

    for(int i = 0; i < 4; i++) {
        
        std::cout<<memAddre[i]<<std::endl;
        std::cout<<*(memAddre + i)<<std::endl;
    }

    std::cin.ignore();
    std::cin.get();

    return 0;
}