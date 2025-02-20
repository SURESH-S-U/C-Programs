#include<stdio.h>
#include<string.h>


int task(int num, char str[][100], char *sep, char sliced[][100])    // The format of 2d array is " char str[][100] " .
{
    int t = 0;

    for(int i=0;i<num;i++)
    {
        char *word = strtok(str[i] , sep);                // Format of sliceing the words. second argument is seperator.

        while(word != NULL)
        {
            strcpy(sliced[t++], word);
            word = strtok(NULL , sep);
        }
    }

    return t;
}

int main()
{
    int num;
    printf("Enter the number of items : ");
    scanf("%d",&num);

    char  str[100][100];
    printf("ENter the string : ");
    for(int i=0;i<num;i++)
    {
        scanf("%s",str[i]);
    }

    char sep[100];                        // Because we can use only string in " strtok " function. in the second argument.
    printf("Enter the sepetater : ");
    scanf("%s",sep);

    char sliced[100][100];               // for sliced words.

    int t = task(num, str, sep, sliced); 


    printf("[");
    for(int i = 0; i < t; i++)
    {   
        if(i < t - 1)
        {
           printf("\"%s\",", sliced[i]);      // you want to print  ' " ' it .  you need to put \" .
        }
        else
        {   
            printf("\"%s\"", sliced[i]);
        }
    }
    printf("]");
}