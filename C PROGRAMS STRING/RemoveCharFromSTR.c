#include<stdio.h>
#include<string.h>
#define MAX 1000

int removechar(char* str, char character, int len)
{
    int i, j;
    for(i = 0; i < len; i++)
    {
        if(str[i] == character)
        {
            for(j = i; j < len ; j++)
            {
                str[j] = str[j + 1];    // last character switch the numm character "\0". so  it will terminate.
            }

            len--;
            i--;
        }
    }
    return 1;     // Returning 1 to indicate success (or any other relevant value)
}

int main()
{
    char str[MAX];
    printf("Enter the string: ");
    scanf("%s", str);

    char character;
    printf("Enter the character to remove: ");
    scanf(" %c", &character);    // Note the space before  " %c" it ia mandatorty. Because if there is no space it will scan the newline also.
                                 // so the scanf will not scan the character.
                              
    int len = strlen(str);

    printf("The original string is: %s\n", str);

    removechar(str, character, len);

    printf("The removed string is: %s\n", str);
    
    return 0; // Returning 0 to indicate successful completion of main
}
