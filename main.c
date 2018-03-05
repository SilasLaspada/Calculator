#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char getOperand(char operand)
{
    while (1)
    {
        printf("Would you like to add, subtract, multiply, or divide? (a, s, m, d): ");
        scanf("%c", &operand);
        if (operand == 'a' || operand == 's' || operand == 'm' || operand == 'd')
        {
            return operand;
        }
        else
        {
            printf("Please chose a valid input. \n");
            fflush(stdin);
            continue;
        }
    }
}

float getx()
{
    float x;
    printf("Please enter the first number (float): ");
    scanf("%f", &x);
    fflush(stdin);
    return x;
}

float gety()
{
    float y;
    printf("Please enter the second number (float): ");
    scanf("%f", &y);
    fflush(stdin);
    return y;
}

void add()
{
    float x = getx();
    float y = gety();
    printf("%f plus %f is %f \n", x, y, x+y);
    return;
}

void subtract()
{
    float x = getx();
    float y = gety();
    printf("%f minus %f is %f \n", x, y, x-y);
    return;
}

void multiply ()
{

    float x = getx();
    float y = gety();
    printf("%f multiplied by %f is %f \n", x, y, x*y);
    return;
}

void divide()
{
    float x = getx();
    float y;
    while (1)
    {
        y = gety();
        if (y == 0)
        {
            printf("Please enter an integer that is not 0.\n");
            continue;
        }
        break;
    }
    printf("%f divided by %f is %f \n", x, y, x/y);
    return;
}

void doCalculation()
{
    char op = '\0';
    op = getOperand(op);
    switch (op) {
        case 'a':
            add();
            break;
        case 's':
            subtract();
            break;
        case 'm':
            multiply();
            break;
        case 'd':
            divide();
            break;
    }
}

bool repeat()
{
    while (1)
    {
        printf("Would you like to do another calculation? (y, n): ");
        char confirm = '\0';
        scanf("%c", &confirm);
        fflush(stdin);
        if (confirm == 'y')
        {
            return 1;
        }
        else if (confirm == 'n')
        {
            return 0;
        }
        else
        {
            printf("Please enter a valid option. \n");
            continue;
        }
    }
}

int main()
{
    printf("Welcome to calculator v0.2\n");
    while (1)
    {
        doCalculation();
        bool again = repeat();
        if (again)
            continue;
        else
            break;
    }
    printf("Goodbye!");
    return 0;
}
