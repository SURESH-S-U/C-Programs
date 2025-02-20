#include<stdio.h>

int checkpivot(int arr[],int size)          // Pivot index means print the index.
{                                           // If the sum of numbers before and sum of numbers after are equal.
    int t;
    int k;

    for(int i=0;i<size;i++)
    {
        int sumFront = 0;
        int sumBack = 0;
        
        for(int k=0; k < i ;k++)          // For sum the numbers that in the before of i;
        {
            sumFront += arr[k];
        }

        for(int k=i+1; k < size ;k++)          // For sum the numbers that in the after of i;
        {
            sumBack += arr[k];
        }

        if(sumFront == sumBack)
        {
            return i;
        }

    }
}

int main()
{
    int size;
    printf("Ennter the size of an array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int index = checkpivot(arr,size);

    printf("The pivot index is : %d",index);
}