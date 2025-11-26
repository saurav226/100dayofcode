
//day32.2- 100 days of code
// Find the digit that occurs the most times in an integer number.


#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0};
    int i, maxFreq = 0, mostFrequentDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    
    if (num < 0) {
        num = -num;
    }

    
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    
    for (i = 0; i < 10; i++) {
        if (count[i] > maxFreq) {
            maxFreq = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs most frequently is: %d (appeared %d times)\n", mostFrequentDigit, maxFreq);

    return 0;
}
