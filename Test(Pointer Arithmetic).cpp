#include<iostream>

//A pointer can use add and subtaction ++, --, +=, -=...

int main () {

//     100  104  108  112 
//arr   8    6    7    5  

    int arr[] = { 8, 6, 7, 5 };
    int *memAddre = arr; //pointing to 8...
    int *memAddre2 = memAddre + 3; //X sizeof(int) or 4 x 3 = 12...
    
    //prints out arr in the order of 0 to 3
    for(int i = 0; i < 4; i++) {
        
        std::cout<<*memAddre<<std::endl;
        memAddre++; //add the sizeof(int) to memAddre
    }

    for(int i = 0; i < 4; i++) {
        
        memAddre--;
        std::cout<<*memAddre<<std::endl;
    }
   
    std::cout<<*memAddre<<std::endl;

    std::cout<<*memAddre2<<std::endl; 

    memAddre2-= 1;//memAddre2 = memAddre2 - 1 X sizeof(int)...

    std::cout<<*memAddre2<<std::endl; 

    std::cin.ignore();
    std::cin.get();

    return 0;
}