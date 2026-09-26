////WCP to print first n natural no using FOR-LOOP in Reverse order

#include <stdio.h>
int main(){
    int n, i ;

    printf("Enter a no. : \n");
    scanf("%d", &n);
    
    printf("The first %d to 1 natural numbers are : \n",n);

    for(i=n; i>=1; i--)
    {
        printf("%d \n",i);
    }
}


