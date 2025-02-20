#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int SumOfDiff(char* str, int len)
{
    int sum = 0;

    for(int i=0; i < len-1 ;i++)
    {
        int diff = abs (str[i] - str[i+1]);            // abs --- absolute  for always positive value.    Use standard library for abs. 

        printf("%d\n",diff);
        
        sum = sum + diff;
    }

    return sum;
}

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);
    int len = strlen(str);

    printf("The sum of the difference of adjacent char is : %d ",  SumOfDiff(str , len));        // function calling.
}