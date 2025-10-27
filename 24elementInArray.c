#include <stdio.h> 

int main() { 

    int arr[5] = {10, 20, 30, 40, 50}; 

    int *ptr; 

    ptr = arr; // pointer to first element of array 

    printf("Elements of array using pointer:\n"); 

    for (int i = 0; i < 5; i++) { 
        printf("%d ", *(ptr + i)); // access elements using pointer 
    } 
    
    printf("\n"); // access elements using pointer 
    return 0; 

} 