#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);

    int len =strlen(str);

    char max = 'A';

    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {   
            if( str[i] != str[j])
            {
                if(str[i] == toupper(str[j]))
                {
                    if(toupper(str[i]) > max)
                    {
                        max = toupper(str[i]);
                    }
                }
            }
           
        }
    }

    printf("The max letter in both case is : %c",max);
}