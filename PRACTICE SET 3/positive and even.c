#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number! ");
    scanf("%d", &num);

    if (num > 0 && num % 2 == 0)
    {
        printf("The number is even and positive!");
    }

    printf("\n\n");
    return 0;
}