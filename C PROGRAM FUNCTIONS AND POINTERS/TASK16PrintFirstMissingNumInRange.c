#include<stdio.h>

int NonExistNum(int* arr, int range)                                 // print only firat non existing number.
{
    int flag = 1;
    for(int i=0; i <= range;i++)
    {
        for(int j=0; j <range ;j++)
        {
            if(i == arr[j])
            {
                flag  = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }

        if(flag == 0)
        {
            return i ;
            break ;
        }
    }
}


int main()
{
    int range;
    printf("Enter the range : ");
    scanf("%d",&range);

    int arr[range];
    printf("Enter the array : ");;
    for(int i=0;i<range;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The first non existing number in the range is : %d", NonExistNum(arr , range));

}