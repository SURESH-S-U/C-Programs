#include<stdio.h>
int main()
{
    int num = 123;

    char str[20];

    sprintf(str,"%d",num);

    printf("%s",str);
}