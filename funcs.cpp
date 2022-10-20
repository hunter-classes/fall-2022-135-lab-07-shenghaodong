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

int countChar(std::string line, char c){
    int count = 0;
    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            count++;
        }
    }
    return count;
}