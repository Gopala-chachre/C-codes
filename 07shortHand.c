#include <stdio.h> 

void main() { 

    int a = 10; 
    int b = 5; 
    int c = 12; // For bitwise operations 
    int d = 7;  // For bitwise operations 
    printf("Initial values: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d); 
 
    printf("Arithmetic Compound Assignment Operators:\n"); 

    a += b; 
    printf("a += b: a = %d\n", a);  

    a -= b; 
    printf("a -= b: a = %d\n", a);  

    a *= b;  
    printf("a *= b: a = %d\n", a);  

    a /= b;  
    printf("a /= b: a = %d\n", a);  

    a %= b;  
    printf("a %%= b: a = %d\n", a); 

    printf("Bitwise Compound Assignment Operators:\n"); 

    c &= d;  
    printf("c &= d: c = %d\n", c);  

    c = 12;  
    c |= d; 
    printf("c |= d: c = %d\n", c);  

    c = 12;  
    c ^= d;  
    printf("c ^= d: c = %d\n", c);  

    c = 12;  
    c <<= 1;  
    printf("c <<= 1: c = %d\n", c);  

    c = 12;  
    c >>= 1;  
    printf("c >>= 1: c = %d\n", c);  
} 
