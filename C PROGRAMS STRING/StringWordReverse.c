#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str);

    char word[100];

    int len = strlen(str);
    int t = 0;

    for(int i = len-1 ; i >= 0 ;i--)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[t++] = str[i];
        }

        else if(str[i] == ' ' || str[i] == '\0')
        {
            word[t] = '\0';

            int wordlen = strlen(word);

            for(int j = wordlen-1 ; j>=0; j--)             // from the start of the string there is no null or space.
            {                                              //  so we can't print the first word. so there is a separate loop.
                printf("%c",word[j]);
            }

            printf(" ");

            t = 0;
        }
    }

    for(int i=0;i<len;i++)
    {
        if(str[i] == ' ')
        {
            break;
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}