#include<stdio.h>
#include<string.h>

void remove_nextline(char *string)
{
    int length = strlen(string);
    if(length > 0 && string[length - 1] == '\n')
    {
        string[length - 1] = '\0';
    }
}

int  substring(char*str , char*sub)
{
    int mainlen = strlen(str);
    int sublen = strlen(sub);

    int i;
    int j;

    for(i=0; i <= mainlen - sublen; i++)     // Because to reduce space complexity.
    {
        for(j=0; j < sublen ; j++)
        {
            if(str[i+j] != sub[j])
            {
                break;
            }
        }

        if( j == sublen)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    char str[100];                            //  OR we can use.
    printf("Enter the main string : ");      
    fgets(str ,sizeof(str) ,stdin);          //  scanf("%[^\n]%*c",str);     dont use      scanf("%[^\n]s",str)
    remove_nextline(str);

    char sub[100];
    printf("Enter the sub string 1 : ");
    fgets(sub , sizeof(str) ,stdin);
    remove_nextline(sub);

    if(substring(str , sub))
    {
        printf("---- The sub string Founded ----");
    }

    else
    {
        printf("--- The substring Not  existed ---");
    }

}