#include<stdio.h> 

void main () { 

    char name[20]; // Enter up to 20 Characters 
    char ch; 
    int num; 
    float real; 
    double bigNum; 
    unsigned int unSign; 

    printf("Enter any Character:"); 
    scanf("%c", &ch); 
     
    printf("Enter Any Number:"); 
    scanf("%d", &num); 

    printf("Enter A real value Number:"); 
    scanf("%f", &real); 

    printf("Enter A large Number:"); 
    scanf("%ld", &bigNum); 

    printf("Enter Your Name:"); 
    scanf("%s", &name); 

    unSign = num; // to take the value of num in unsign variable 

    printf("\n\nName is : %s \n", name); 

    printf("Enter the Number : %d \n", num); 

    printf("Enter the Character : %c \n", ch); 

    printf("Real Number is : %f \n", real); 

    printf("Large Number is : %ld \n", bigNum); 

    printf("Unsigned Number is : %u \n", unSign); 

    printf("octal value of entered Number is : %o \n", unSign); 
} 