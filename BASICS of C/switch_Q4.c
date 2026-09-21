//program to find maximum between two numbers using switch case //1= CONDITION TRUE & 0=FALSE
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers to find maximum: ");
    scanf("%d%d", &num1, &num2);

    switch(num2 > num1)
    {   
        case 0: 
            printf("%d is maximum", num1);
            break;
        case 1: 
            printf("%d is maximum", num2);
            break;
    }

    return 0;
}