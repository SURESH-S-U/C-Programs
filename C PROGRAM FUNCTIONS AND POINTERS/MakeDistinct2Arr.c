#include<stdio.h>
#include<string.h>

int task(int *arr, int num)
{
    int a[num/2];
    int b[num/2];
    int t = 0;
    int k = 0;
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[i] == arr[j] && arr[i] != -1)
            {
                a[t++] = arr[i];
                b[k++] = arr[j];

                arr[i] = -1;
                arr[j] = -1;
            }
        }
    }

    for(int i=0;i<num;i++)
    {
        if(t < num/2 && arr[i] != -1)
        {
            a[t++] = arr[i];
            arr[i] = -1;
        }
    } 


    for(int i=0;i<num;i++)
    {
        if(arr[i] != -1)
        {
            b[k++] = arr[i];
        }
    }

    printf("Array a is : ");

    for(int i=0;i<num/2;i++)
    {
        printf("%d",a[i]);
    }


    printf("\nArray b is : ");

    for(int i=0;i<num/2;i++)
    {
        printf("%d",b[i]);
    }  
}


int main()
{
    int num;
    printf("Enter the number of input : ");
    scanf("%d",&num);

    int arr[num];

    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    task(arr,num);
}