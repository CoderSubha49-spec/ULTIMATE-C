//Calculate and print the factorial of every number from 1 to n

#include <stdio.h>
int main() {
    int n;
    unsigned long long fact = 1; // Used to store factorials without overflowing quickly

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    if (n < 1) {
        printf("Enter a no. greater than or equal to 1 \n");
    } else {
        printf("Number -> Factorial\n");
        
        
        // Single loop to calculate and print consecutively
        for (int i = 1; i <= n; i++) {
            fact *= i; // fact = fact * i

            printf("%d! = %llu \n", i, fact);
        }
    }

    return 0;
}
