#include <stdio.h>

int main()
{
    int num1, num2;
    printf("\nEnter a number! ");
    scanf("%d", &num1);

    printf("Enter a number! ");
    scanf("%d", &num2);

    printf("\n");
    int sum = num1 + num2;
    printf("The sum of %d and %d is %d\n\n", num1, num2, sum);
    return 0;
}