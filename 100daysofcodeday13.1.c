//day 13.1

#include <stdio.h>

int main() {
    char op;
    int num1, num2;
    int result;

    printf("enter first number:");
    scanf("%d", &num1);

    printf("enter arithmetic operator(+,-,*,/,%%):");
    scanf("%c", &op);

    printf("enter second number:");
    scanf("%d", &num2);

    switch(op)
    {
        case '+':
        {
            result = num1 + num2;
            printf("result=%d\n", result);
            break;
        }
        case '-':
        {
            result = num1 - num2;
            printf("result=%d\n", result);
            break;
        }
        case '*':
        {
            result = num1 * num2;
            printf("result=%d\n", result);
            break;
        }
        case '/':
        {
            if(num2!=0)
            {
                result = num1 / num2;
                printf("result=%d\n", result);

            }
            else
            {
                printf("error:division by zero is not allowed\n");
                
            }
            break;
        }
        case '%':
        {
            if(num2 !=0)
            {
                result = num1 % num2;
                printf("result=%d\n", result);
            }
            else
            {
                printf("error:modulous by zero is not allowed\n");
            }
            break;
        }
        default:
        {
            printf("error invalid operator\n");
        }
    }

    return 0;
}