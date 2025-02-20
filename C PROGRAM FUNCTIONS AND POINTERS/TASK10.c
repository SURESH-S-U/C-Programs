#include<stdio.h>

int task(int arr[],int size,int counts[])
{
    int t= 0;
    int count = 0;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i] < arr[i+1])
        {
            count++;
        }
        else
        {
            counts[t++] = count;
            count = 0;
        }
    }

    count = 0;

    for(int i=0;i<size-1;i++)
    {
        if( arr[i+1] < arr[i])
        {
            count++;
        }
        else
        {
            counts[t++] = count;
            count = 0;
        }
    }

    return t;
}

int main()
{
    int size;
    printf("Enter the size of inputs : ");
    scanf("%d",&size);

    int arr[size];
    int counts[100];
    printf("Enter the array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int t = task(arr,size,counts);

    int max = 0;
    for(int i=0;i<t;i++)
    {
      if(counts[i] > max)
      {
        max = counts[i];
      }  
    }

    printf("The gratest count is : %d",max);
}