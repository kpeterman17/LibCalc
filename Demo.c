#include <stdio.h>
#include "LibCalc.h"

int main()
{
    char input;
    int intOne;
    int intTwo;

    printf("Enter in the coresponding letter to the operation you'd like to complete.\n\n");
    printf("  a. Add\n");
    printf("  b. Subtract\n");
    printf("  c. Multiply\n");
    printf("  d. Divide\n\n");
    printf("> ");

    input = getchar();

    if (input == 'a')
    {
        printf("Enter in two numbers to be added:\n");
        printf("> ");

        scanf("%d", &intOne);
        scanf("%d", &intTwo);

        printf("Answer: %d\n", add(intOne, intTwo));

        getchar();
        return 0;
    }

    else if (input == 'b')
    {
        printf("Enter in two numbers to be subtracted:\n");
        printf("> ");

        scanf("%d", &intOne);
        scanf("%d", &intTwo);

        printf("Answer: %d\n", sub(intOne, intTwo));

        getchar();
        return 0;
    }

    else if (input == 'c')
    {
        printf("Enter in two numbers to be multiplied:\n");
        printf("> ");

        scanf("%d", &intOne);
        scanf("%d", &intTwo);

        printf("Answer: %d\n", mult(intOne, intTwo));

        getchar();
        return 0;
    }

    else if (input == 'd')
    {
        printf("Enter in two numbers to be divided:\n");
        printf("> ");

        scanf("%d", &intOne);
        scanf("%d", &intTwo);

        printf("Answer: %d\n", div(intOne, intTwo));

        getchar();
        return 0;
    }

    else
    {
        printf("Invalid input.");

        getchar();
        return 0;
    }
}