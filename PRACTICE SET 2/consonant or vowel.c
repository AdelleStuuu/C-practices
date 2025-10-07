#include <stdio.h>
#include <stdbool.h>

int main()
{
    char letter;
    bool isVowel;
    printf("Insert a Letter: ");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        isVowel = true;
        break;
    default:
        isVowel = false;
    }

    if (isVowel)
    {
        printf("It is a vowel!");
    }
    else
    {
        printf("It is a consonant!");
    }

    printf("\n\n");
    return 0;
}