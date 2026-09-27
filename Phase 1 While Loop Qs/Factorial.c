////Calculate and print the factorial of a given number.
//6 - 1 x 2 x3 x 4 x 5 x 6 = 

#include <stdio.h>
int main() {
    int n, i=1 ;
    long long factorial =1;

    printf("Enter a positive integer n : ");
    scanf("%d", &n);

    if(n < 1){
        printf("Factorial can't be calcualte for numbers less than 1 \n");
    }
    else{
        while (i<=n)
        {
          factorial = factorial * i; //factorial *= i  //sum = sum+i -> sum+=i
          i++;
        }
        printf("Factorial of %d = %lld \n", n, factorial);

    }
}