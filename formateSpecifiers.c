#include<stdio.h> 

void main () { 

    int a = 25; 

    float b = 3.1476; 

    char c = 'G'; 

    int d = 703; 

    char st[6] = "hello"; 

    printf("Number: %d \n", a); 

    printf("Number: %6d \n", a); 

    printf("decimal: %f \n", b); 

    printf("decimal: %6f \n", b); 

    printf("decimal: %.2f \n", b); 

    printf("decimal: %6.2f \n", b); 

    printf("Char: %c \n", c); 

    printf("octal Number: %o \n", d); 

    printf("hexa Number: %x \n", d); 

    printf("string: %s \n", st); 

} 
