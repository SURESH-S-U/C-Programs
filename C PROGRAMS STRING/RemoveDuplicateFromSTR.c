#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int RemoveDuplicate(char*str , int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=i+1 ;j<len;j++)
        {
            if(str[i] == str[j])
            {
                for(int k=j ;k<len ;k++)
                {
                    str[k] = str[k+1];   // The last character shift with "\0". so it will terminated and removed.
                }

                len--;
                j--;

            }
        }
    }

    return 1;
}

int main()
{
    char str[1000];
    printf("Enter the strinng :");
    scanf("%s",str);

    int len = strlen(str);

    RemoveDuplicate(str , len);

    printf("The removed string is : %s",str);
}