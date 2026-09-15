// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    char operator;
    double num1, num2, result;
    printf("Enter an operator (+, -, *, /, %%): ");
    if (scanf(" %c", &operator) != 1)
    {
        printf("Error: Invalid character input.\n");
        return 1;
    }
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error: Division by zero is undefined.\n");
        }
        else
        {
            result = num1 / num2;
            printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
        }
        break;
    case '%':
        if ((int)num2 == 0)
        {
            printf("Error: Modulo by zero is undefined.\n");
        }
        else
        {
            int intResult = (int)num1 % (int)num2;
            printf("Result: %d %% %d = %d (Floating values cast to integers)\n", (int)num1, (int)num2, intResult);
        }
        break;
    default:
        printf("Error: '%c' is an invalid operator.\n", operator);
        break;
    }
    return 0;
}
