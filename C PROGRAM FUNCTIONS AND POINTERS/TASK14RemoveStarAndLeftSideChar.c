#include<stdio.h>
#include<string.h>

char* RemoveStar(char*str, int len)
{
    for(int i=0;i<len;i++)
    {
        if(str[i] == '*')
        {
            for(int j=0 ; j < 2 ;j++)                  //  for  remove 2 char .
            {
                for(int k= i-1 ; k<len ;k++)
                {
                    str[k] = str[k+1];
                }
                len-- ;
            }
        }
    }

    return str;
}

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);
    int len = strlen(str);

    printf("The final string is : %s",RemoveStar(str, len));
}