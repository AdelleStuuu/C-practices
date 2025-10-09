#include <stdio.h>

int main()
{
    int year;
    printf("Hey, Enter a year to see if its a century year! ");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        printf("It is a century year!");
    }
    else
    {
        printf("Oop, not a century year");
    }

    printf("\n\n");
    return 0;
}