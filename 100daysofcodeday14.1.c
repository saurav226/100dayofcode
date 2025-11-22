// Day 14.1 - 100 days of code
// WAP to print the sum of first n odd number

#include <stdio.h>
int main() {
    int n, i, odd, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    // generate first n odd numbers
    for (i = 1; i <= n; i++) {
        odd = 2 * i - 1;   // i-th odd number
        sum += odd;
    }

    printf("Sum of first %d odd numbers is %d\n", n, sum);

    return 0;
}
