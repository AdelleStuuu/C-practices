#include <stdio.h>

int EnterNumber()
{
    int number;
    printf("Enter your number! ");
    scanf("%d", &number);
    printf("Number Registered!\n\n");
    return number;
}

int main()
{
    int num1, num2, num3;

    num1 = EnterNumber();
    num2 = EnterNumber();
    num3 = EnterNumber();

    int biggestNumber;
    if (num1 > num2 && num1 > num3)
    {
        biggestNumber = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        biggestNumber = num2;
    }
    else
    {
        biggestNumber = num3;
    }

    printf("\nThe biggest number out of the three is %d!\n\n", biggestNumber);
    return 0;
}