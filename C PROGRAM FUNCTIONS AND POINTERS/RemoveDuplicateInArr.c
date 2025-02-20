#include<stdio.h>

int deleteDuplicates(int arr[]) {
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k=j;k<size;k++)
                {
                    arr[k] = arr[k+1];
                }
                j--;
                size--;
            }
        }
    }
}

int main()
{
    
}