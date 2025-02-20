#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sort(const void*a,const void*b)                     // function must for this code.
{
    return strlen((char*)b) - strlen((char*)a);  // it is descending order.
}                                                            // we can change descending to ascending by change the position of a and b.

int main()
{
    int num;
    printf("Enter the number of words : ");
    scanf("%d",&num);

    if(num <= 1)
    {
        printf("0");
        return 0;
    }

    char str[100][100];
    for(int i=0;i<num;i++)
    {
        scanf("%s",str[i]);
    }

    qsort(str,num,sizeof(str[0]),sort);     // must pass the function name as a attribute.

    int max = strlen(str[0]);
    int count =0;

    for(int i=0;i<num;i++)
    {
        int len = strlen(str[i]);
        
        if(len < max)
        {
            count++;
            max = len;
            break;
        }
    }

    if(count > 0)
    {
        printf("The second largest length is : %d",max);
    }
    else
    {
        printf("0");
    }
}