#include<stdio.h>
#include<string.h>
#include<limits.h>           // this library used for use      MAX and MIN  value of integer.


int main()
{
    char str[200];
    printf("Enter the string with more than one word : ");
    scanf("%[^\n]%*c",str);
    int len = strlen(str);

    char word[100];
    char Maxword[100];
    char Minword[100];

    int max = 0;
    int min = INT_MAX;             // INT_MAX   refers the  most integer value of all integers.

    int t =0;

    for(int i=0;i <= len ;i++)                    // i <= len  include null character is must because we check both " " && "\0" in next line.
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[t] = str[i];
            t++;
        }

        if(str[i] == ' '  || str[i] == '\0')
        {
            word[t] = '\0';

            int wordlen = strlen(word);

            if(wordlen > max)
            {
                max = wordlen;

                strcpy(Maxword ,  word);
            }

            if(wordlen < min)
            {
                min = wordlen;

                strcpy(Minword , word);
            }

            t = 0;
        }
    }

    printf("\nThe small word is : %s ", Minword);
    printf("\nThe largest word is : %s", Maxword);

    return 0;
}