
//day22.2- 100 days of code
// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= 2*n; i += 2) {
        if (((i-1)/2) % 2 == 0)
            sum += (float)i / (i + 1);
        else
            sum -= (float)i / (i + 1);
    }

    printf("Sum = %.2f\n", sum);
    return 0;
}
