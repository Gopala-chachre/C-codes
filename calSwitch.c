#include<stdio.h> 

void main(){ 

    int num1 , num2; 
    int ch; 
    float resutl; 

    printf("Enter the 1st number:"); 
    scanf("%d", &num1); 

    printf("Enter the 2nd number:"); 
    scanf("%d", &num2); 

    printf("Choice the Operation :\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Division\n -->"); 
    scanf("%d", &ch); 

    switch (ch){ 

        case 1: 
        printf("Sum of %d and %d is : %d", num1, num2, num1+num2);
        break;

        case 2: 
        printf("Difference of %d and %d is : %d", num1, num2, num1-num2); 
        break;

        case 3: 
        printf("Multiplaction of %d and %d is : %d", num1, num2, num1*num2); 
        break; 

        case 4: 
        resutl = num1/num2; 
        printf("Divisin of %d and %d is : %.2f", num1, num2, resutl); 
        break; 

        default: 
        printf("##########Enter the right value##########"); 
    } 
} 