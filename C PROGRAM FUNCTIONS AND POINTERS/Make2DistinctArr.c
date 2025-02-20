#include<stdio.h>

int task(int *arr, int num, int *a, int *b)
{
    int t = 0;
    int k = 0;

    for(int i=0;i<num;i++)
    {
        int flag = 1;

        for(int j=0; j < t ;j++)
        {
            if(a[j] == arr[i])
            {
                flag = 0;
                break;
            }
        }

        if(flag && t < num/2)
        {
            a[t++] = arr[i];
        }
        else
        {
            b[k++] = arr[i];
        }
    }

    return t;
}

int main()
{
    int num;
    printf("Enter the number of items : ");
    scanf("%d",&num);

    if(num % 2 != 0)
    {
        printf("Invalid input");
        return 0;
    }

    
    int arr[num];
    int a[num/2];
    int b[num/2];


    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    int t = task(arr ,num ,a ,b);


    printf("The value of t is : %d",t);

    printf("\nThe array a is : ");
    for(int i=0; i<t ;i++)
    {
        printf("%d",a[i]);
    }

    printf("\nThe array b is : ");
    for(int i=0; i<(num-t) ;i++)
    {
        printf("%d",b[i]);
    }

}