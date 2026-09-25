//to check whether a number is positive, negative or zero using switch case
#include <stdio.h>

int main() {
    int num;
    printf("Enter a no. : ");
    scanf("%d", &num);

    switch (num > 0) {
        case 1:
            printf("The number is POSITIVE");
            break;
        case 0:
            switch (num < 0) {
                case 1:
                    printf("The number is NEGATIVE");
                    break;
                case 0:
                    printf("The number is ZERO");
                    break;
            }
            break;
    }

    return 0;
}