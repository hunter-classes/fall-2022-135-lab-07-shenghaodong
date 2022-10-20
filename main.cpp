#include <iostream>
#include "funcs.h"

int main(){
    //std::cout << removeLeadingSpaces("          Hello World!");
    //./a.out < README.org
    std::string badCode;
    while(std::getline(std::cin, badCode)){
        std::cout << removeLeadingSpaces(badCode) << std::endl;
    }

    return 0;
}
