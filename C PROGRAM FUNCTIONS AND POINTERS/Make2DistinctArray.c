#include<stdio.h>
#include<stdlib.h>

int MakeDistinct(int arr[],int size)
{
    int *arrA = (int *)malloc(size * sizeof(int));  // Dynamic allocation
    int *arrB = (int *)malloc(size * sizeof(int)); 
    int t = 0;
    int k = 0;

    for(int i=0;i<size;i++)
    {
        int flag = 0;

        for (int j = 0; j < t; j++)
        {
            if (arrA[j] == arr[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag && k < size / 2)
        {
            arrB[k++] = arr[i];
        }

        else if (!flag && t < size / 2)
        {
            arrA[t++] = arr[i];
        }
    }

    for(int i=0;i<t;i++)
    {
        printf("%d",arrA[i]);
    }

    printf("\n");

    for(int i=0;i<k;i++)
    {
        printf("%d",arrB[i]);
    }
}


void DistinctBack(int arr[],int size)
{
    int last = size-1;

    for(int i=0;i <= last;i++)     // BEcause when the i reaches the distinct element in the last . It might again replace it.
    {
        int flag = 1;

        for(int j=0;j<size;j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            int temp = arr[i];
            arr[i] = arr[last];
            arr[last] = temp;

            last--;
            i--;
        }
    }

    MakeDistinct(arr,size);

}

int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    int *arr = (int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    DistinctBack(arr,size);

    free(arr);

}