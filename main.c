#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char getOperand(char operand)
{
    while (1)
    {
        printf("Would you like to add, subtract, multiply, or divide? (a, s, m, d): ");
        scanf("%c", &operand);
        if (operand == 'a' || operand == 's' || operand == 'm' || operand == 'd') {
            return operand;
        }
        else {
            printf("Please chose a valid input. \n");
            fflush(stdin);
            continue;
        }
    }
}

int getx()
{
    int x;
    printf("Please enter the first number (int): ");
    scanf("%d", &x);
    fflush(stdin);
    return x;
}

int gety()
{
    int y;
    printf("Please enter the second number (int): ");
    scanf("%d", &y);
    fflush(stdin);
    return y;
}

void add()
{
    int x = getx();
    int y = gety();
    printf("%d plus %d is %d \n", x, y, x+y);
    return;
}

void subtract()
{
    int x = getx();
    int y = gety();
    printf("%d minus %d is %d \n", x, y, x-y);
    return;
}

void multiply ()
{

    int x = getx();
    int y = gety();
    printf("%d multiplied by %d is %d \n", x, y, x*y);
    return;
}

void divide()
{
    int x = getx();
    int y = gety();
    printf("%d divided by %d is %d \n", x, y, x/y);
    return;
}

void doCalculation()
{
    char op = '\0';
    op = getOperand(op);
    printf("You chose: %c \n", op);
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
    printf("Welcome to calculator v0.1\n");
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
