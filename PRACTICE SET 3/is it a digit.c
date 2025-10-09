#include <stdio.h>

int main()
{
    char input;
    printf("provide a character! ");
    scanf("%c", &input);

    switch (input)
    {
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case '0':
        printf("The character is a digit!");
        break;

    default:
        printf("The character is not a digit!");
        break;
    }

    printf("\n\n");
    return 0;
}