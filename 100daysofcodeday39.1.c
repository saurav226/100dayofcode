
//day39.1- 100 days of code
// Check if the elements on the diagonal of a matrix are distinct.


#include <stdio.h>

int main() {
    int matrix[100][100];
    int diagonal[100]; 
    int n, i, j, isDistinct = 1;

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
        diagonal[i] = matrix[i][i];
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diagonal[i] == diagonal[j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct)
            break;
    }

    if(isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT all distinct.\n");

    return 0;
}
