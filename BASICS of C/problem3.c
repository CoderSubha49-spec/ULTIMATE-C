/*Write a program to calculate simple interest for a set of values 
representing principal, number of years and rate of interest*/

#include<stdio.h>
int main(){
    float SI, P=6000, t=4, r=2;

    SI= ((P*r*t)/100);
    printf("The simple interest for the given problem is %f",SI);
    return 0;
}


