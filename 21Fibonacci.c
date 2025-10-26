#include<stdio.h> 

void main(){ 

int i, n, num1 , num2 ; 
int num3 = 0; 

printf("Enter the terms upto you want the fibonacci series:"); 
scanf("%d", &n); 

printf("Enter First term :"); 
scanf("%d", &num1); 

printf("Enter Second term :"); 
scanf("%d", &num2); 

printf("%d, ", num1); 
printf("%d, ", num2); 

for (i = 0 ; i < n-2 ; i++){ 
    num3 = num1 + num2 ; 
    printf("%d, ", num3); 
    num1 = num2; 
    num2 = num3; 
} 
}