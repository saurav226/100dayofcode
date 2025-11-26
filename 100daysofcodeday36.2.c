
//day36.2- 100 days of code
// Find the sum of all elements in a matrix.


#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];  

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  
        }
    }

   
    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
