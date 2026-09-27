#include <stdio.h>

// Function prototype
void ReverseTable(int num, int i);

// Recursive function to print the table
void ReverseTable(int num, int i){
    if(i <0){
        return ;
    }
    // Print the current row
    printf("%d x %d = %d \n", num, i, num * i);
    
    // Recursive call: Decrease the multiplier by 1
    ReverseTable(num, i - 1);
}

int main(){
    int num;
    printf("Enter a no. : \n");
    scanf("%d", &num);

    printf("Multiplication table of %d is : \n",num);
    ReverseTable(num, 10);
}

