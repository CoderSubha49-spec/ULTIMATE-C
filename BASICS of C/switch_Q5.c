//C program to check whether a number is even or odd using switch case
/* The modulus operator (%) finds the remainder of a division, and num % 2 always results 
in either 0 or 1 for any integer, which matches case 0 and case 1 

Even numbers - divide completely by 2 with no remainder left over. That means num % 2 
equals 0. This is why case 0 prints that the number is even  */
#include <stdio.h>
int main(){
    int num;
    printf("Enter a no. : ");
    scanf("%d", &num);

    switch (num%2)
    {
    case 0:
        printf("The number is even\n");
        break;
    case 1:
        printf("The no. is ODD\n");
        break;    
    
    default:
        break;
    }

    return 0;
}