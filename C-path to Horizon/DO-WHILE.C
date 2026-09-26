//DO-WHILE

#include <stdio.h>
int main() {
    int i=1;

    do
    {
        printf("The value of i is %d \n", i);
        i++;
    } while (i<=10);
    
}

/* i++[POST INCREAMENT] - Print the value of 'i' first (before the increment),
 and then increments i  POST INCREMENT(i++) */

/* ++i (Pre-Increment) - Increments first, then returns the new value.
  ++i Value of i after the increment. */