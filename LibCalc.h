#include <stdio.h>

int add(int intOne, int intTwo);
int sub(int intOne, int intTwo);
int mult(int intOne, int intTwo);
int div(int intOne, int intTwo);

int add(int intOne, int intTwo)
{
    return intOne + intTwo;
}

int sub(int intOne, int intTwo)
{
    return intOne - intTwo;
}

int mult(int intOne, int intTwo)
{
    return intOne * intTwo;
}

int div(int intOne, int intTwo)
{
    return intOne / intTwo;
}