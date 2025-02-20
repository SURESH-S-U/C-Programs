#include<stdio.h>

int fact(int a)
{
    if(a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a-1);                      // call function again itself.
    }
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("The factorial is  : %d",fact(num));
}