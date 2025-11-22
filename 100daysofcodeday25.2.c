
//day25.2- 100 days of code
/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>

int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
