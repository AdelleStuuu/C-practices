#include <stdio.h>

int main()
{
    int number1, number2;

    printf("\n");
    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    if (number1 > number2)
    {
        printf("%d is greater than %d", number1, number2);
    }
    else if (number1 < number2)
    {
        printf("%d is greater than %d", number2, number1);
    }
    else
    {
        printf("Numbers are equal");
    }
    printf("\n\n");
}