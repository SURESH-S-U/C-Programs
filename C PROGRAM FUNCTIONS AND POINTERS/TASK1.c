#include<stdio.h>

int task(int arr[],int size)
{
    int tempsize = size;
    for(int i=0;i<tempsize;i++)
    {
        int temp = arr[i];
        if(arr[i] % 2 != 0)
        {
            for(int j=i;j<size-1;j++)
            {
                arr[j] = arr[j+1];
            }

            arr[size-1] = temp;
            tempsize--;
            i--;
        }
    }
}

int main()
{   
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    task(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}