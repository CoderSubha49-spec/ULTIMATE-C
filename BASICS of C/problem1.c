/*Calculate the area of a circle and modify the same program to calculate 
the volume of a cylinder given its radius and height 
AREA OF CIRCLE = (A = pi r^2) 
VOLUME OF CYLINDER = pi r^2 *h  */

/*
#include <stdio.h>
int main() {
    int r=6;
    float A;
    A=3.14*r*r;
    printf("The area of the circle with radius %d is %f",r,A);
    return 0;
}
*/
#include <stdio.h>

int main() {
    int r=6;
    int height =10;
    printf("The area of circle with radius %d is %f\n",r, 3.14*r*r);
    printf("\nThe volume of the cylinder with radius %d and height %d is %f",r, height, 3.14*r*r*height);
    return 0;
}


