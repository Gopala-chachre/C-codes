#include<stdio.h> 

void swap (int *a, int *b){  

    int temp;  
    temp = *a;  
    *a = *b; 
    *b = temp; 

} 

int main(){ 

    int num1, num2;  

    printf("Enter first number:");  

    scanf("%d", &num1); 

    printf("Enter Second number:");  

    scanf("%d", &num2); 

    printf("Before calling the swap function:\n"); 
    printf("num1 = %d & num2 = %d \n", num1, num2); 
    
    swap(&num1 , &num2); 

    printf("After calling the swap function:\n"); 
    printf("num1 = %d & num2 = %d\n", num1, num2); 

    return 0; 
}