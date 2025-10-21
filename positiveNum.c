#include<stdio.h> 

void main (){ 

    int flag = 0, n ; 
    while (flag == 0){ 
        printf("Enter a number: "); 
        scanf("%d", &n); 

        if (n > 0){ 
            printf("Entered Number is %d", n); 
            flag = 1; 
        } 
    } 
}