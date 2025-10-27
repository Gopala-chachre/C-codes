#include<stdio.h> 

void main(){ 

    int lt[] = {1,2,3,4,5}; 
    int copyLt[6]; 
    int i; 
    int len = 4; 

    for( i = 0; i < 5; i++){ 
        printf("%d  ", lt[i]); 
    } 

    for(i=0; i<5; i++){ 
        copyLt[i] = lt[len]; 
        len--; 
    } 

    printf("\n"); 

    for( i = 0; i < 5; i++){ 
        printf("%d  ", copyLt[i]); 
    } 
}