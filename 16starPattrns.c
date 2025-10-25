#include<stdio.h> 

void main(){ 
int a , i, j; 
printf("Enter the number of lines You want in Pyramid : "); 
scanf("%d", &a); 

for (i = 0; i <= a; i++){
    for (j = 1; j <= i; j++){ 
        printf("*"); 
    }
    printf("\n"); 
}
}