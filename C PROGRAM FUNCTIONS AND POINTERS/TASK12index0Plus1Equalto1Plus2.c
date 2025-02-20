#include<stdio.h>

int isequal(int* arr, int num)
{
    for(int i=0; i<num-1 ;i++)
    {
        int temp1 = (arr[i] + arr[i+1]) %2 ;

        for(int j = i+1; j<num-1 ;j++)
        {
            int temp2 = (arr[j] + arr[j+1]) % 2;

            if(temp1 != temp2)
            {
                for(int k=j; k<num-1 ;k++)             // k < num-1   Because there is no null characcter in array. only garpage  value.
                {                                      // if we put num the garbage value will switched with that number.
                    arr[k] = arr[k+1];
                }
                num--;
            }
        }
    }

    return num;
}

int main()
{
    int num;
    printf("Enter the number of elements : ");
    scanf("%d",&num);

    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    int finallen = isequal(arr , num);

    printf("\nThe final length of array is : %d",finallen);

    printf("\nThe array is : ");
    for(int i=0;i<finallen;i++)
    {
        printf("%d ",arr[i]);
    }
}