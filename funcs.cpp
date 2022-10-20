#include <iostream>

std::string removeLeadingSpaces(std::string line){
    //removes spaces in front of a string
    for(int i = 0; i < line.length(); i++){
        if(line.substr(i, 1) != " "){
            return line.substr(i);
            break;
        }
    }
    return "";
}