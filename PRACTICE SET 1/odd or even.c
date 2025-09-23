#include <stdio.h>

int main()
{
    int number;
    printf("\nEnter a number here please! ");
    scanf("%d", &number);
    printf("\n");
    if (number % 2 == 0)
    {
        printf("WOah! This number is even!");
    }
    else
    {
        printf("NooO! This number is odd!");
    }
    printf("\n\n");
    return 0;
}