#include<stdio.h> 

void main (){ 
int n , temp, rem, i = 1, newTerm = 0; 

printf("Enter a number :"); 
scanf("%d", &n); 
temp = n; 

while (temp > 0){ 
    rem = temp%10; 
    newTerm = newTerm*10+rem; 
    temp /= 10; 
} 

if (newTerm == n){ 
    printf("The number %d is a Palindrome.", n); 
}else { 
    printf("The number %d is NOT a Palindrome.", n); 
}

}