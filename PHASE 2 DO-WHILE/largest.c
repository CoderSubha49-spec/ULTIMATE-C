/* Keep taking numbers from the user until 0 is entered, 
then print the largest number among all inputs. */
#include <stdio.h>
#include <limits.h>

int main() {
    int num, max = INT_MIN, count = 0;
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);

        if (num != 0) {
            if (num > max) {
                max = num;
            }
            count++;
        }
    } while (num != 0);

    if (count > 0) {
        printf("Largest number entered = %d\n", max);
    } else {
        printf("No valid numbers were entered.\n");
    }

    return 0;
}