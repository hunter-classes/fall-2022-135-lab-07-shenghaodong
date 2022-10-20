#include <iostream>
#include "funcs.h"

int main(){
    //std::cout << removeLeadingSpaces("          Hello World!");
    //./a.out < bad-code.cpp
    std::string badCode;
    int bracketCounter = 0;
    while(std::getline(std::cin, badCode)){
        std::string checkLine = removeLeadingSpaces(badCode);
        if(checkLine.substr(0, 1) == "}"){
            bracketCounter--;
        }
        for(int i = 0; i < bracketCounter; i++){
            std::cout << "\t";
        }
        std::cout << removeLeadingSpaces(badCode) << std::endl;
        bracketCounter += countChar(badCode, '{');
        bracketCounter -= countChar(badCode, '}');
        
    }

    return 0;
}
