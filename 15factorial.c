#include<stdio.h> 

int main() { 
int fact = 1,num; 
printf("Enter a Number:"); 
scanf("%d", &num); 

for (int i = num; i > 0; i--){ 
    fact *= i; 
} 

printf("The factroial of number %d is: %d", num, fact); 
return 0; 

} 