#include <stdio.h>

void print_addition(double, double);
void print_subtraction(double, double);
void print_multiplication(double, double);
void print_division(double, double);
void calculate(double, double, char);

int main(){
    int choice;
    double a, b;
    char op;

    printf("Welcome to the Calculator!\n");

    do {
        printf("Please enter your expression (number operator number): ");
        if (scanf("%lf %c %lf", &a, &op, &b) == 3) {
            calculate(a, b, op);
        } else {
            printf("Error: Invalid input format.\n");
            while (getchar() != '\n'); // clear the buffer
        }

        printf("\n1. Calculate another operation\n");
        printf("Any other key to exit the system\n");
        printf("Choose an option: ");
        
        if (scanf("%d", &choice) != 1 || choice != 1) {
            printf("Exiting system. Goodbye!\n");
            break;
        }

    } while (1);

    return 0;
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

void calculate(double a, double b, char op) {
    switch (op) {
        case '+':
            print_addition(a, b);
            break;
        case '-':
            print_subtraction(a, b);
            break;
        case '*':
            print_multiplication(a, b);
            break;
        case '/':
            print_division(a, b);
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }
}