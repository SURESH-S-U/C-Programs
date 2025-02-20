#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sort(const void*a,const void*b)
{
    return  strlen((const char*)b) - strlen((const char *)a) ;
}

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str);
    int len = strlen(str);

    char word[100];
    int t = 0;
    int k = 0;

    char array[100][100];

    for(int i=0;i<=len;i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[t++] = str[i];
        }
        else
        {
            word[t] = '\0';
            strcpy(array[k++],word);

            t = 0;
        }
    }
    
    printf("\nThe 2d array is : ");

    for(int i=0;i<k;i++)
    {
        printf("%s ",array[i]);
    }

    qsort(array,k,sizeof(array[0]),sort);

    printf("\nThe sorted string is : ");

    for(int i=0;i<k;i++)
    {
        printf("%s ",array[i]);
    }
}