#include<stdio.h>

void calculate(int arr[],int num,int t,int sumarr[])
{
    t -= 1;
    int sum = 0;
    for(int k=0;k<num;k++)
    {
        sum += k*arr[k];
    }
    sumarr[t] = sum;

}

int main()
{
    int num;
    printf("Enter the number of elements :");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the array :");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int t = 0;
    int sumarr[num];
    for(int i=0;i<num;i++)
    {
        int temp = arr[0];
        for(int j=0;j<num-1;j++)
        {
            arr[j] = arr[j+1];
        }
        arr[num-1] = temp;
        t++;
        calculate(arr,num,t,sumarr);
    }

    int max = 0;
    for(int l=0;l<num;l++)
    {
        if(sumarr[l]>max)
        {
            max = sumarr[l];
        }
    }

    printf("The max is : %d",max);
}