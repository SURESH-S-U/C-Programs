#include <stdio.h>
#include<string.h>           // question : print the index and reversed index of the given word into  the string .
#include<ctype.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str);
    int len = strlen(str);

    char comp[100];
    printf("Enter  the char to compare : ");
    scanf("%[^\n]%*c",comp);
    int complen = strlen(comp);

    int index = 0;

    for(int i=0;i<len;i++)
    {
        if(strncmp(&str[i], comp,complen) == 0)
        {
            index = i;
            break;
        }
    }

    printf("\nThe index of the entered string is : %d ",index);

    int t = 0;
    int k = 0;

    while(index > 0)
    {
        k = index % 10;
        t = t*10 + k;
        index = index / 10;
    }

    printf("\nThe reverse of the index of entered string is : %d",t);
}