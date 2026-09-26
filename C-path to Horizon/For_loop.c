//WCP to print first n natural no using FOR-LOOP

#include <stdio.h>
int main(){
    int n, i ;

    printf("Enter a no. : \n");
    scanf("%d", &n);
    
    printf("The first %d natural numbers are : \n",n);

    for(i=1; i<=n;i++){
        printf("%d \n",i);
    }

}

