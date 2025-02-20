#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    printf("Enter the string with mmore than one words : ");
    scanf("%[^\n]%*c",str);

    int len = strlen(str);

    char word[100];
    int t = 0;
    int space_count = 0;  

    for(int i=0; i <= len; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[t++] = str[i];
        }

        else if(str[i] == ' ' || str[i] ==  '\0')
        {
            word[t] = '\0';
            space_count++;

            if(space_count % 2 == 0)
            {
                printf("\n%s",word);
            }

            t = 0;
        }
    }

}