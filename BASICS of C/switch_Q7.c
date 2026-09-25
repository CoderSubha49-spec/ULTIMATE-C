//Write a C program to find roots of a quadratic equation using switch case

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    int condition;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) condition = 1;
    else if (discriminant == 0) condition = 2;
    else condition = 3;

    switch (condition) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Root 1 = %.2lf, Root 2 = %.2lf\n", root1, root2);
            break;
        case 2:
            root1 = root2 = -b / (2 * a);
            printf("Root 1 = Root 2 = %.2lf\n", root1);
            break;
        case 3:
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
            break;
    }
    return 0;
}
