#include <stdio.h>
#include "complexity.h"
// Calculator that performs basic arithmetic operations: addition, subtraction, multiplication, and division using function pointers. The program prompts the user to enter an expression in the format "num1 operator num2" and then performs the corresponding operation based on the operator provided.
void add(int *a, int *b)
{
    printf("Sum: %d\n", *a + *b);
}
void sub(int *a, int *b)
{
    printf("Difference: %d\n", *a - *b);
}
void mul(int *a, int *b)
{
    printf("Product: %d\n", *a * *b);
}
void division(int *a, int *b)
{
    if (*b != 0)
    {
        printf("Quotient: %d\n", *a / *b);
    }
    else
    {
        printf("Error: Division by zero!\n");
    }
}

int main()
{   START_COMPLEXITY();
    int num1, num2;
    char operator;
    printf("Enter an expression (e.g.,  + ): ");
    scanf("%d %c %d", &num1, &operator, &num2);
    void (*operation)(int*, int*);
    switch (operator)
    {
    case '+':
        operation = add;
        break;
    case '-':
        operation = sub;
        break;
    case '*':
        operation = mul;
        break;
    case '/':
        operation = division;
        break;
    default:
        printf("Error: Unsupported operator '%c'\n", operator);
        return 1;
    }
    operation(&num1, &num2);
    END_COMPLEXITY();
    return 0;

}