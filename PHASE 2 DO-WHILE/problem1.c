/* Keep taking numbers from the user until 0 is entered, 
then print the sum of all entered numbers. */

#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("Total sum of entered numbers = %d\n", sum);
    return 0;
}