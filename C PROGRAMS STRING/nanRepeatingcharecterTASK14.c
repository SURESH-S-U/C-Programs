#include<stdio.h>
#include<string.h>
#define MAX 1000

int main()
{
    char str[MAX];
    printf("Enter the string :");
    scanf("%s",str);
    
    int len = strlen(str);
    int flag;

    for(int i=0;i<len;i++)
    {
        flag = 0;
        for(int j=0;j<len;j++)
        {
            if(i != j)
            {
                if(str[i] == str[j])
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 0)
        {
            printf("The first non reapeating character is : %c",str[i]);
            break;
        }
    }

        
    if(flag == 1)
    {
        printf("NO non repeating character ");
    }
        
    
}