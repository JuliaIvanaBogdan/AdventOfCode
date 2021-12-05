#include <stdio.h>
#include <fstream>
#include <iostream>
#include <tuple>
#include <list>


int partone(){
    int sol = 0;
    std::tuple <int,int> vent;
    std::list<std::tuple<int,int>> vents;
        
    std::ifstream input;
    input.open("C:\\Users\\Julia\\Documents\\VSCode\\AdventOfCode\\day5\\day5input");

    int x1,y1,x2,y2;
    char e,f,g,h;
    while(input >> x1 >> e >> y1 >> f >> g >> x2 >> h >> y2){
        //TO DO
    }
    

    return sol;
}


int main(){
    int solution = partone();
    printf("%d",solution);
    return 0;
}