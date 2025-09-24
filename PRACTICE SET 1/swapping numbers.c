#include <stdio.h>

int main()
{
    int num1, num2, swap;

    printf("\nEnter first number! ");
    scanf("%d", &num1);

    printf("Enter second number! ");
    scanf("%d", &num2);

    swap = num1;
    num1 = num2;
    num2 = swap;

    printf("%d and %d is now swapped!\n\n", num1, num2);
    return 0;
}