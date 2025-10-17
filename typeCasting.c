#include <stdio.h> 

void main() { 

    int a = 10; 
    float b = 5.5; 
    char c = 'A';   
    float sum1 = a + b;         
    float diff1 = b - c;  
    int sum2 = a + (int)b;     
    char diff2 = (char)(c - a); 

    printf("Implicit Conversion Results:\n"); 
    printf("a + b = %.2f\n", sum1); 
    printf("b - c = %.2f\n", diff1); 

    printf("Explicit Conversion Results:\n"); 
    printf("a + (int)b = %d\n", sum2); 
    printf("(char)(c - a) = %c (ASCII: %d)\n", diff2, diff2); 

} 
