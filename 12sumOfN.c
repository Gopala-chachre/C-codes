#include<stdio.h> 

void main(){ 

    int n, sum = 0; 
    
    printf("Enter a Number:"); 
    scanf("%d", &n); 

    for(n; n>0; n--){ 
        sum += n; 
    } 
    printf("Sum of Natural number upto %d is: %d", n, sum); 
} 
