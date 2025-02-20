#include<stdio.h>
#include<math.h>


int task(int i)
{
    int arr[100];
    int t = 0;  
    while(i>0)
    {
        int temp = i%10;
        arr[t++] = temp;
        i = i/10;
    }
    
    for(int j=0;j<t;j++)
    {
        for(int k=j+1;k<t;k++)
        {
            if(arr[j] == arr[k])
            {
                return 0;
            }
        }
    }

    return 1;
}


int main()
{
    int digit;
    printf("Enter the number of digits : ");
    scanf("%d",&digit);

    int uniquenumbers = 0;

    for(int i=0; i < pow(10,digit);i++)
    {
        uniquenumbers += task(i); 
    }

    printf("The total Uniquenumbers is : %d",uniquenumbers);
}