
//day27.2- 100 days of code
/*
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int rows[] = {2, 4, 6, 4, 2};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < rows[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
