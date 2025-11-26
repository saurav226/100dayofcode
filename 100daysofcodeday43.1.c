
//day43.1- 100 days of code
// Reverse a string.


#include <stdio.h>

int main() {
    char str[1000];
    int length = 0, i;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: ");
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
