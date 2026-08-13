#include <stdio.h>

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
