#include <stdio.h>
#include <fstream>
#include <iostream>
#include<tgmath.h>



int powerconsumption(){
    int gammarate=0;
    int epsilonrate=0;

    std::ifstream input ("C:\\Users\\Julia\\Documents\\VSCode\\AdventOfCode\\day3\\day3input");

    char c;
    int sum[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int m = 0;
    while (input >> c){
        int n = c - '0'; 
        sum[m]+=n;
        if (m==11){
            m=0;
        }
        else{
            m++;
        }
    }
    int gamma[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int epsilon[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    for (int i=0;i<12;i++){
        if(sum[i]>500){
            gamma[i]=1;
            epsilon[i]=0;
        }else{
            gamma[i]=0;
            epsilon[i]=1;
        }

    }
    
  
    for (int i=0; i<12;i++){
        gammarate = gammarate*2 + gamma[i];
        epsilonrate = epsilonrate*2 + epsilon[i];

    }
    return gammarate*epsilonrate;
}

/*int lifesupportrating(){
    int oxygengeneratorrating = 0;
    int CO2scrubberrating = 0;

    std::ifstream input ("C:\\Users\\Julia\\Documents\\VSCode\\AdventOfCode\\day3\\day3input");

    char c;
    int values[1000][12];
    int sum[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int m = 0;
    int n = 0;
    while (input >> c){
        int v = c - '0'; 
        values[n][m] = v;
        sum[m]+=v;
        if (m==11){
            m=0;
            n+=1;
        }
        else{
            m++;
        }
    }

    for (int i=0;i<12;i++){
        if(sum[i]>=500){
            sum[i]=1;
        }else{
            sum[i]=0;
        }
    }
    //1=not taken 0=taken

    //would have to be done with lists
    int findO[1000] = {0};
    int findCO2[1000] = {0};

    for (int i=0;i<12;i++){
        for(int j=0;j<1000;j++){
            if(sum[i]==values[j][i]){
                findCO2[j]=1;
            }else{
                findO[j]=1;
            }
        }
    }

    

    return oxygengeneratorrating*CO2scrubberrating;
}*/

int main(){
    int solution = powerconsumption();
    //int solution = lifesupportrating();
    printf("%d",solution);
    return 0;
}


