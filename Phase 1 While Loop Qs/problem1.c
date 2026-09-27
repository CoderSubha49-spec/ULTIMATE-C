//Calculate and print the sum of the first n natural numbers.

#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer n: \n");
    scanf("%d", &n);

    while (i <= n) {
        sum += i; // sum = sum + i
        i++;      // increment counter
    }

    printf("Sum of first %d natural numbers is: %d \n", n, sum);
    return 0;
}