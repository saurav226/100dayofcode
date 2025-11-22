
//day23.2- 100 days of code
/*Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/


#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
