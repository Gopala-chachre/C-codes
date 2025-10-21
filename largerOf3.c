#include<stdio.h> 

void main(){ 

    int a , b , c; 

    printf("Enter the 1st Number:"); 
    scanf("%d", &a);

    printf("Enter the 2nd Number:"); 
    scanf("%d", &b);

    printf("Enter the 3rd Number:"); 
    scanf("%d", &c); 
 
    if (a > b){ 
        if (a > c){ 
            printf("%d is the largest", a); 
        }else { 
            printf("%d is the largest", c); 
        } 
    }else{ 
        if (b > c){ 
            printf("%d is the largest", b); 
        }else { 
            printf("%d is the largest", c); 
        } 
    } 
}