#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char mainstr[100];
    printf("Enter the main string : ");           // Malloc and Realloc is not mandatory it is used to reduce space complexity.
    scanf("%[^\n]%*c",mainstr);

    char sub_1[100];
    printf("Enter the sub string one : ");
    scanf("%[^\n]%*c",sub_1);

    char sub_2[100];
    printf("Enter the sub string two : ");
    scanf("%[^\n]%*c",sub_2);

    int k;
    printf("Enter the k value : ");
    scanf("%d",&k);

    int mainlen = strlen(mainstr);
    int sublen_1 = strlen(sub_1);
    int sublen_2 = strlen(sub_2);

    int count = 0;

    int* index = (int*)malloc(mainlen * sizeof(int));         // Dynamic memory array was created.
                                                              // Using mainlen for creat max length of  dynamic memory.
    for(int i=0; i<mainlen-sublen_1 ;i++)
    {
        if(strncmp(&mainstr[i] , sub_1 ,sublen_1) == 0)
        {
            for(int j=0; j<mainlen-sublen_2; j++)
            {
                if(strncmp(&mainstr[j] , sub_2 ,sublen_2) == 0  && abs( i - j) < k)          //  abs[absolute] means always positive.
                {                                                                           // If we use strncmp function we & is must.
                    index[count++] = i;
                    break;
                }
            }
        }
    }

    index = (int*)realloc(index ,count*sizeof(int));         // Realloc means remove the extra unused indexes.it will reduce based on count.

    printf("[");

    for(int i=0;i<count ;i++)
    {
        if(i < count-1)
        {
            printf("%d,",index[i]);
        }
        else                                             // used for print like ---  [1,2,3]
        {
            printf("%d",index[i]);
        }
    }

    printf("]");
}