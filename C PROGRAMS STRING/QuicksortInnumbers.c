#include<stdio.h>
#include<stdlib.h>

int sort(const void*a , const void*b)
{
    return *(int*)a - *(int*)b;
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

    qsort(arr , num , sizeof(int) ,sort);

    for(int i=0;i<num;i++)
    {
        printf("%d",arr[i]);
    }
}