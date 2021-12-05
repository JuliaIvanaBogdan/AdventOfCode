#include <stdio.h>
#include <fstream>
#include <iostream>
#include<tgmath.h>



int powerconsumption(){
    int gammarate=0;
    int epsilonrate=0;

    std::ifstream input ("input file location");

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

    //TO DO

    return oxygengeneratorrating*CO2scrubberrating;
}*/

int main(){
    int solution = powerconsumption();
    //int solution = lifesupportrating();
    printf("%d",solution);
    return 0;
}


