#include<stdio.h>

int Possible(int*arr, int num , int target)
{
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            for(int k=j+1;k<num;k++)
            {
                if(arr[i] + arr[j] + arr[k] == target)
                {
                    printf("[%d,%d,%d]",arr[i],arr[j],arr[k]);
                }
                else if(arr[i] + arr[j] == target)
                {
                    printf("[%d,%d]",arr[i],arr[j]);
                }
            }
        }
    }
}

int main()
{
    int num;
    printf("Enter the number of elements : ");
    scanf("%d",&num);

    int arr[num];
    printf("Enter the array : ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter the target integer : ");
    scanf("%d",&target);

    Possible(arr , num , target);
}