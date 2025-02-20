#include<stdio.h>
#include<stdlib.h>

int sort(const void*a , const void*b)
{
    return *(char*)a - *(char*)b;
}

char NextGrater(char* arr, int num , char target)
{
    char b[num];
    int t = 0;
    for(int i=0;i<num;i++)
    {
        if(arr[i] > target)
        {
            b[t++] = arr[i];
        }
    }

    qsort(b , t , sizeof( char ), sort);

    return b[0];
}


int main()
{
    int num;
    printf("Enter the number of char : ");
    scanf("%d",&num);

    char arr[num];
    printf("Enter the char array : ");
    for(int i=0;i<num;i++)
    {
        scanf(" %c",&arr[i]);       // space must in front of char.          //     space in front of char for remove the newline char. 
    }

    char target;
    printf("Enter the target : ");
    scanf(" %c",&target);

    printf("The next gratest char is : %c",  NextGrater(arr , num ,target));
}