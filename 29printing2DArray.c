#include <stdio.h> 

int main() { 
    int matrix[3][4] = { {10, 20, 30, 40}, {50, 60, 70, 80}, {90, 11, 22, 33} }; 

    int row_index, col_index; 
    
    printf("Enter the row index (0 to 2): "); 
    scanf("%d", &row_index); 
    
    printf("Enter the column index (0 to 3): "); 
    scanf("%d", &col_index); 
    
    
    if (row_index >= 0 && row_index < 3 && col_index >= 0 && col_index < 4) { 
        printf("Element at index [%d][%d] is: %d\n", row_index, col_index, matrix[row_index][col_index]); 
    } else { 
        printf("Invalid row or column index entered.\n"); 
    } 
    
    return 0; 

}