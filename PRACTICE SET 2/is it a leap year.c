#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year;
    bool isItLeap;
    printf("\nEnter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            isItLeap = true;
        }
        else
        {
            if (year % 400 == 0)
            {
                isItLeap = true;
            }
            else
            {
                isItLeap = false;
            }
        }
    }
    else
    {
        isItLeap = false;
    }
    if (isItLeap)
    {
        printf("It is a leap year!!!");
    }
    else
    {
        printf("It is not a leap year!!!");
    }
    printf("\n\n");
}