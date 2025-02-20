#include<stdio.h>
#include<string.h>
#include<ctype.h>

int func(char*word)
{
    int sum = 0;
    for(int i=0;i<strlen(word);i++)
    {
        sum = sum*10 + word[i]-'0';
    }

    return sum;
}

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str);
    int len =  strlen(str);

    char word[100];
    int t = 0;
    int tot = 0;

    for(int i=0;i<=len;i++)
    {
        if(isdigit(str[i]))
        {
            word[t++] = str[i];
        }
        else
        {
            word[t] = '\0';
            tot += func(word);
            t = 0;
        }
    }

    printf("%d",tot);

}