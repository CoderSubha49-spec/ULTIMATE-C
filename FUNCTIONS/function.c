#include <stdio.h> 

// Function prototype 
int sum(int, int); 

// Function definition 
int sum(int x, int y){ 
    return x + y; 
} 

int main(){ 
    // Store and print the returned value
    int result = sum(1, 3); 
    printf("The sum is %d\n", result); 
    
    return 0;
}
