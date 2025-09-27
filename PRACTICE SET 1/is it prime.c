#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number;
    bool isPrime;
    printf("\n");
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        isPrime = true;
        if (number % i == 0)
        {
            isPrime = false;
            printf("Number is not Prime");
            break;
        }
    }

    if (isPrime)
    {
        printf("Number is Prime");
    }
    printf("\n\n");
}