#include <stdio.h>

int main()
{
    int number, product;
    printf("Enter a number to output the multipllication table! ");
    scanf("%d", &number);
    int iteration = 1;

    while (iteration != 11)
    {
        product = number * iteration;
        printf("%d\n", product);
        iteration++;
    }
    return 0;
}