#include<stdio.h>

void task(int *arr,int n)            // if we put void. then chane the array.  
{                                    // it will automatically  change the address of the array in the main function.
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] % 2 == 0 )
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr;
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
