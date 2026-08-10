#include <stdio.h>

void print_addition(double, double);
void print_subtraction(double, double);
void print_multiplication(double, double);
void print_division(double, double);

int main(){
    
}

void print_addition(double a, double b) {
    printf("%.2f\n", a + b);
}

void print_subtraction(double a, double b) {
    printf("%.2f\n", a - b);
}

void print_multiplication(double a, double b) {
    printf("%.2f\n", a * b);
}

void print_division(double a, double b) {
    if (b == 0) {
        printf("Error: This operation is undefined\n");
    } else {
        printf("%.2f\n", a / b);
    }
}