#include<stdio.h> 

void main(){ 
    
    int n ; 
    printf("Enter a Number :"); 
    scanf("%d", &n); 

    if (n%2 == 0){ //this condition check that the number is divisible by 2 for even 
        printf("%d is an Even Number", n); 
    } else { 
        printf("%d is an Odd Number", n); 
    } 
} 
