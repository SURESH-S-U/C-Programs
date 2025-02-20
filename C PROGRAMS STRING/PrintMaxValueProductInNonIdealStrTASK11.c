#include<stdio.h>
#include<string.h>
#define MAX 100

int function(char*string_1 , char*string_2)   // we cant pass the  value like --Char*str[i]
{                                             // but in these case string_1  ACTS  as   str[i].
    int len1 = strlen(string_1);
    int len2 = strlen(string_2);

    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(string_1[i] == string_2[j])
            {
                return 0;
            }
        }
    }
    return 1;
}


int main()
{
    int NumWords;
    printf("Enter the number of words : ");
    scanf("%d",&NumWords);

    char str[MAX][MAX];                         // str[MAX] used to acces the string.   str[MAx][MAx] used to acces index into each string.
    printf("Enter the words : \n");

    for(int i=0;i<NumWords;i++)
    {
        scanf("%s",str[i]);
    }

    int max = 0;

    for(int i=0;i<NumWords;i++)
    {
        for(int j=i+1;j<NumWords;j++)
        {                                       // str[i] means first string  and  str[2] means second string.
            if(function(str[i] , str[j]))
            {
                int product = strlen(str[i]) * strlen(str[j]);
                
                if(product > max)
                {
                    max = product;
                }
            }
        }
    }

    printf("The Max value of Product : %d ",max);

}