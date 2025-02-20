#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the string with more than one words :");
    scanf("%[^\n]%*c",str);

    int len = strlen(str);

    char word[100];

    int t = 0;

    for(int i=0; i<=len; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[t] = str[i];
            t++;
        }

        else if(str[i] == ' ' || str[i] == '\0')
        {
            word[t] = '\0';

            int wordlen = strlen(word);

            if(wordlen %2 == 0)
            {
                printf("\n%s",word);
            }

            t = 0;
        }
    }
}