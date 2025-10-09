#include <stdio.h>

int main()
{
    float numOfPeople, peopleBackingOut, costOfPurchase;

    printf("Enter number of people in the group! ");
    scanf("%f", &numOfPeople);
    printf("Enter the cose of the present! Php");
    scanf("%f", &costOfPurchase);
    printf("Enter the number of people backing out! ");
    scanf("%f", &peopleBackingOut);

    float initialContribution = costOfPurchase / numOfPeople;
    float additionalCostOfPurchase = initialContribution * peopleBackingOut / (numOfPeople - peopleBackingOut);
    float newContributionCosts = initialContribution + additionalCostOfPurchase;

    printf("\nOriginal contribution per person: Php%.2f", initialContribution);
    printf("\nAdditional contribution per person: Php%.2f", additionalCostOfPurchase);
    printf("\nNew contribution cost per person: Php%.2f", newContributionCosts);

    printf("\n\n");
    return 0;
}