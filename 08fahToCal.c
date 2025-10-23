#include<stdio.h> 

void main(){ 

    float fahr , cels; 
    printf("Enter the fahrenheit value:"); 
    scanf("%f", &fahr); 

    cels = (fahr - 32) * 5.0/9 ; 
    printf("%.2f in Celsius is : %.2f", fahr , cels); 
} 
