#include<stdio.h>
#include<string.h>

int task(int num, int arr[], int finarr[],int t)
{
    int sum = 0;

    for(int i=0;i<num;i++)
    {
        sum =  arr[i] * i + sum;
    }

    finarr[t++] = sum;

    return t;
}

int main()
{
    int num;
    printf("Enter the number of inputs : ");
    scanf("%d",&num);

    int arr[100];
    printf("Enter the array : ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    int finarr[100];
    int t = 0;
    int temp;

    for(int i=0;i<num;i++)
    {

        t = task(num , arr , finarr,t);
        
        temp = arr[num-1];

        for(int j=num-1;j>=0;j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;

    }

    finarr[t] = '\0';

    for(int i=0;i<num;i++)
    {
        printf("%d ",finarr[i]);
    }

    int max = 0;
    for(int i=0;i<t;i++)
    {
        if(max < finarr[i])
        {
            max = finarr[i];
        }
    }

    printf("\nThe maximum Value is : %d",max);
}