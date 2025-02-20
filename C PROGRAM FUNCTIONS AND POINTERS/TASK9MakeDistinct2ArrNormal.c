#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int isPossible(int *arr, int num)
{
    int count ;
    for(int i=0;i<num;i++)
    {
        count = 1;
        for(int j=i+1;j<num;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > 2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

}

int main()
{
    int num;
    printf("Enter the number elements : ");
    scanf("%d",&num);
    int arr[num];

    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(num % 2 != 0)
    {
        printf("Invalid input");
    }

    else
    {
        if(isPossible(arr,num))
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
}