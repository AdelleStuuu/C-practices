#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your grade here! ");
    scanf("%d", &grade);

    if (grade >= 50)
    {
        printf("You Passed!");
    }
    else
    {
        printf("You Failed!");
    }

    printf("\n\n");
    return 0;
}