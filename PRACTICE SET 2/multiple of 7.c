#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number to see if its a multiple of 7! ");
    scanf("%d", &number);

    if (number % 7 == 0)
    {
        printf("It is a multiple of 7!");
    }
    else
    {
        printf("It is not a multiple of 7!");
    }

    printf("\n\n");
    return 0;
}