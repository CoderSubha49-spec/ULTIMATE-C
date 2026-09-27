#include <stdio.h>
long long fact(long long a);

long long fact(long long a){
    if(a==1 || a==0){
        return 1;
    }                        // 4! (a!) = 1 x 2 x 3 x 4 =(a-1)! x n 
    return fact(a-1)* a;
}

int main(){
    int a;
    printf("Enter a no. : \n");
    scanf("%d", &a);

    if (a<0)
    {
       printf("Factorial can't be calculate for -VE numbers");
    }
    else {
        printf("Factorial of %d is %lld \n",a, fact(a));
    }
    
    return 0;
}