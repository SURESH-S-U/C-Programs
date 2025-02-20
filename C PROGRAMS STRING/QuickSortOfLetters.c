#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sort(const void*a,const void*b)                     // function must.
{
    return *(char*)a - *(char*)b;                       // change position fo "a" and "b" by change assending to dessending.
}


int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);

    int len = strlen(str);

    qsort(str,len,sizeof(str[0]),sort);


    printf("%s",str);
}