#include <stdio.h>
#include <stdlib.h>

void add(double a, double b)
{
    printf("%g\n", a + b);
}

void subtract(double a, double b)
{
    printf("%g\n", a - b);
}

double multiply(double a, double b)
{
    printf("%g\n", a * b);
}

void divide(double a, double b)
{
    if (b == 0) {
        printf("This operation is not defined\n");
        return;
    }
    printf("%g\n", a / b);
}

void route(double a, char op, double b)
{
    switch (op) {
    case '+':
        add(a, b);
        break;
    case '-':
        subtract(a, b);
        break;
    case '*':
        multiply(a, b);
        break;
    case '/':
        divide(a, b);
        break;
    default:
        printf("Closing the program\n");
        exit(0);
    }
}
