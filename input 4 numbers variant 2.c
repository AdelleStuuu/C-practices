#include <stdio.h>

int main()
{
    int horseshoe1, horseshoe2, horseshoe3, horseshoe4;
    int UniqueHorseshoes, amountToBuy;

    printf("\nInput first Horseshoe: ");
    scanf("%d", &horseshoe1);
    printf("Input second Horseshoe: ");
    scanf("%d", &horseshoe2);
    printf("Input third Horseshoe: ");
    scanf("%d", &horseshoe3);
    printf("Input fourth Horseshoe: ");
    scanf("%d", &horseshoe4);

    UniqueHorseshoes = (horseshoe1 != horseshoe2 && horseshoe1 != horseshoe3 && horseshoe1 != horseshoe4) +
                       (horseshoe2 != horseshoe3 && horseshoe2 != horseshoe4) +
                       (horseshoe3 != horseshoe4);

    amountToBuy = 4 - (UniqueHorseshoes + 1);

    printf("The amount of unique horseshoes to buy is/are %d!\n\n", amountToBuy);
    return 0;
}