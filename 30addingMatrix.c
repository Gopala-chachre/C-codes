#include <stdio.h> 

int main() { 

    int rows, cols; 
    int matrix1[10][10], matrix2[10][10], sumMatrix[10][10]; 
    int i, j; 

    printf("Enter the number of rows (max 10): "); 
    scanf("%d", &rows); 
    printf("Enter the number of columns (max 10): "); 
    scanf("%d", &cols); 

    printf("\nEnter elements of Matrix 1:\n"); 

    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) { 
            printf("Enter element a%d%d: ", i + 1, j + 1); 
            scanf("%d", &matrix1[i][j]); 
        } 
    } 

    printf("\nEnter elements of Matrix 2:\n"); 

    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) { 
            printf("Enter element b%d%d: ", i + 1, j + 1); 
            scanf("%d", &matrix2[i][j]); 
        } 
    } 

    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) { 
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j]; 
        } 
    } 

    printf("\nSum of the two matrices:\n"); 

    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) { 
            printf("%d\t", sumMatrix[i][j]); 
        } 
        printf("\n");  
    } 
    return 0; 
}