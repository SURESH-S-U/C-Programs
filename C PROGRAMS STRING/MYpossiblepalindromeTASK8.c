#include<stdio.h>
#include<string.h>
#define MAX 10000

int main()
{
    char str[MAX];
    printf("Enter the string: ");
    scanf("%s", str);

    int len = strlen(str);

    if(len == 1)
    {
        printf("The output is: -2");
    }
    else if(len > 1)
    {
        for(int i = 0; i < len; i++)
        {
            printf("%c\n", str[i]);
        }

        for(int i = 0; i < len; i++)
        {
            for(int j = i + 1; j < len; j++)
            {
                if(str[i] == str[j])
                {
                    int start = i;
                    int end = j;
                    int isPalindrome = 1;

                    while(start < end)
                    {
                        if(str[start] != str[end])
                        {
                            isPalindrome = 0;
                            break;
                        }
                        start++;
                        end--;
                    }

                    if(isPalindrome)
                    {
                        for(int k = i; k <= j; k++)
                        {
                            printf("%c", str[k]);
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
    
    else
    {
        printf("String Empty");
    }

    return 0;
}
