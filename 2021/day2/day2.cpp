#include <stdio.h>
#include <fstream>
#include <iostream>


int stepone(){
    int horizontal = 0;
    int depth = 0;

    std::ifstream input;
    input.open("input file location");

    if(!input){
        printf("problem opening file");
    }

    char* direction = new char[10];
    int scale;

    while(input >> direction >> scale){

        if (direction[0] == 'f'){
            horizontal += scale;  
        }
        else if(direction[0] == 'd'){
            depth += scale;
        }
        else if( direction[0] == 'u'){
            depth -= scale;
        }
    }
    return horizontal * depth;
}


int steptwo(){
    int horizontal = 0;
    int depth = 0;
    int aim = 0;

    std::ifstream input;
    input.open("input file location");

    if(!input){
        printf("problem opening file");
    }

    char* direction = new char[10];
    int scale;

    while(input >> direction >> scale){

        if (direction[0] == 'f'){
            horizontal += scale;
            depth += scale * aim;  
        }
        else if(direction[0] == 'd'){
            aim += scale;
        }
        else if( direction[0] == 'u'){
            aim -= scale;
        }
    }
    return horizontal * depth;
}


int main(){
    //int solution = stepone();
    int solution = steptwo();
    printf("%d", solution);
    return 0;
}

