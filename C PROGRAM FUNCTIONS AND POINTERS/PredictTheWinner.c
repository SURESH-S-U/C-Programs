#include <stdio.h>
#include <stdbool.h>

int check(int arr[],int start,int end)
{
    if(start==end)
    {
        return arr[start];
    }
   
    int pickstart = arr[start] - check(arr,start+1,end);
    int pickend = arr[end] - check(arr,start,end-1);
   
    return pickstart > pickend ? pickstart : pickend ;
}

bool predictTheWinner(int arr[],int size)
{
    return check(arr,0,size-1)>=0;
}

int main()
{
    int size;
    scanf("%d",&size);
   
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    if(predictTheWinner(arr,size))
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}