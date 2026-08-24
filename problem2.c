/*Write a program to convert Celsius 
(Centigrade degrees temperature to Fahrenheit)*/

#include<stdio.h>

  int main() {
    float C=37, F;
       
    F=((9.0/5.0)*C) + 32;
    printf("The value of the Celsius temp %f in F-scale is %f",C,F);
    return 0;
    

}
