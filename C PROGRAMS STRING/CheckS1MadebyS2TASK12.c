#include<stdio.h>
#include<string.h>
#define MAX 10000

int Check(char*s1 , int len1, char*s2 ,int len2)
{
    int count = 0;

    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(s1[i] == s2[j])
            {
                for(int k=j;k<len2;k++)
                {
                    s2[k] = s2[k+1];
                }
                
                len2--;
                j--;
                count++;
                break;
            }
        }
    }

    if(count == len1)
    {
        printf("---- True ----");
    }
    
    else
    {
        printf("----- False ----");
    }
}


int main()
{
    char s1[MAX];
    printf("enter the string 1 : ");
    scanf("%s",s1);

    char s2[MAX];
    printf("enter the string 2 : ");
    scanf("%s",s2);


    int len1 = strlen(s1);
    int len2 = strlen(s2);

    Check(s1, len1, s2, len2);


}