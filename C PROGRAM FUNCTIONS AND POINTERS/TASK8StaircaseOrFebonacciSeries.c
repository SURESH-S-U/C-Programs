#include<stdio.h>
#include<string.h>

int task(int num)                       // It is a small trick for staircase task. Because the answer of febonacci series are opted for that.
{
    int a=0 , b=1, c;
    for(int i=0;i<num;i++)
    {
        c = a+b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int num;
    printf("Enter the number of steps : ");
    scanf("%d",&num);

    if(num <= 0 || num >= 49)
    {
        printf("---- Invalid input ----");
    }
    else
    {
        printf("The posiblities are : %d",task(num));
    }
}