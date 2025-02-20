#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char str[100];
    printf("Enter the sring of 4 digits : ");
    scanf("%s",str);

    int len = strlen(str);
    int max = 0;
    int first;
    int second;

    for(int i=0; i<len ;i++)
    {
        for(int j=0; j<len ;j++)
        {
            if( i != j)
            {
                int temp = ((str[i]-'0')*10) + str[j]-'0';

                if(temp < 24 && temp > max)
                {
                    max = temp;
                    first = i;
                    second = j;

                }
            }
        }
    }

    printf("%d :",max);

    int max2 = 0;

    str[first] = ' ';
    str[second] = ' ';

    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len;j++)
        {
            if(i != j)
            {
                if(str[i] != ' ' && str[j] != ' ')
                {
                    int temp2 = ((str[i]-'0')*10) + str[j]-'0';

                    if(temp2 < 60 && temp2 > max2)
                    {
                        max2 = temp2;
                    }
                }
            }
        }
    }

    printf(" %d",max2);
    if(max2 == 0)
    {
        printf("0");
    }
}