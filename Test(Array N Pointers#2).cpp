#include<iostream>

//Pointer * are variable that hold memory addresses...
//You can not change what the array is storing... 

int main () {
    int arr[] = { 8, 6, 7, 5 };
    int num = 3;
    int *memAddre = &num;

    std::cout<<arr<<std::endl;
    std::cout<<memAddre<<std::endl;
    
    //arr is constant, memAddre is not...
    //assassigning the contents of arr to memAddre
    memAddre = arr;
    //this will not work because arr is constant...
    // arr = memAddre;...

    std::cout<<arr<<std::endl;
    std::cout<<memAddre<<std::endl;

    std::cout<<arr[1]<<std::endl;
    //this works because memAddre is = arr...
    std::cout<<memAddre[1]<<std::endl;

    std::cout<<*memAddre<<std::endl; 
    std::cout<<*arr<<std::endl;     //* in arr because it is still an array is still a pointer even thos its a constant pointer...

    std::cout<<*(arr + 0)<<std::endl;
    std::cout<<arr[0]<<std::endl;

    std::cout<<*(memAddre + 1)<<std::endl;
    std::cout<<memAddre[1]<<std::endl;


    std::cin.ignore();
    std::cin.get();

    return 0;
}