#include<stdio.h> 

void main (){ 
    int a[5] = {7,8,9,10,11}; int *p[5]; int **pp; 

    for (int i=0; i<5; i++){ 
        p[i] = &a[i]; 
    } 
    
    pp = p; 
    pp++; 
    
    printf("pp-p = %d \n", pp-p); 
    printf("*pp-a = %d \n", *pp-a); 
    printf("**pp = %d \n", **pp); 
    printf("++*p = %d \n", ++*pp); 
    printf("value at new *pp = %d \n", *pp); 
    printf("++**pp = %d \n", ++**pp);  

}