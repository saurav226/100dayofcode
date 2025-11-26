
//day39.2- 100 days of code
//Find the sum of main diagonal elements for a square matrix.


#include <stdio.h>

int main() {
    int matrix[100][100];
    int n, i, j, sum = 0;

    
    printf("Enter the size of the square matrix (n for nxn): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
