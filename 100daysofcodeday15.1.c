// Day 15.1 - 100 days of code
// WAP to calculate factorial of a number.

#include <stdio.h>
long long factorial(int n) 
{
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;
}
