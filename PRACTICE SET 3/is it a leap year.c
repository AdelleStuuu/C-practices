#include <stdio.h>

int main()
{
    int year;
    printf("Hey, Enter a year to see if its a century year! ");
    scanf("%d", &year);

    if (year % 100 != 0)
    {
        if (year % 4 == 0)
        {
            printf("It is a leap year!");
        }
        else
        {
            printf("Oop, not a leap year");
        }
    }
    else if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("It is a leap year!");
        }
        else
        {
            printf("Oop, not a leap year");
        }
    }
    else
    {
        printf("Oop, not a leap year");
    }

    printf("\n\n");
    return 0;
}