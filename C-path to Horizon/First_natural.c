//WCP to print first n natural no using DO-WHILE

#include <stdio.h>
int main() {
    int n, i=1;
    printf("Enter a no. : \n");
    scanf("%d", &n);

    printf("The first %d natural numbers are :  \n",n);
    do
    {
       printf("%d \n", i);
       i++; 
       //(Post-Increment)"Use the value FIRST, then add 1." - like at first 1, then -> 2, 2+1=3,3+1=4
    } while (i<=n);
    
}