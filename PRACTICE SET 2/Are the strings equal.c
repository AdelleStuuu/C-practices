#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char string1[] = "", string2[] = "";

    printf("Enter first word/words: ");
    scanf("%s", string1);
    printf("Enter second word/words: ");
    scanf("%s", string2);

    for (i = 0; i <= strlen(string1); i++)
    {
        if (string1[i] != string2[i])
        {
            printf("The word/s are not the same!");
            break;
        }
        else
        {
            if (i == strlen(string1))
            {
                printf("The word/s are the same!");
            }
            else
            {
                continue;
            }
        }
    }
    printf("\n\n");
    return 0;
}