#include<stdio.h> 

void main (){ 

    int num, flag = 0; 
    printf("Enter a Number:"); 
    scanf("%d", &num); 

     for (int i = 2; i < (num/2)+1 ; i++) 
    { 
        if (num % i == 0){ 
            flag = 1; 
            break; 
        } 
    } 

    if (flag == 0 ) 
    { 
        printf("%d is a Prime Number.", num); 
    } else{ 
        printf("%d is not a Prime Number.", num); 
    } 
}