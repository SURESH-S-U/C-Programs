#include<stdio.h>
#include<string.h>

int task(int num,char *str,int t)
{
    int len = strlen(str);
    int count = 0;

    char temp[100];
    
    for(int i= len-1 ; i>=0 ;i--)
    {
        if(str[i] != '-')
        {
            count++;

            if(count == num+1)
            {
                temp[t++] = '-';
                temp[t++] = str[i];

                count = 1;
            }
            else
            {
                temp[t++] = str[i];
            }

        }
    }

    temp[t] = '\0';

    int z = 0;

    for(int i = t-1 ; i>=0 ; i--)     
    {
        str[z++] = temp[i];
    }

    str[z] = '\0';

    return t;
}

int main()
{
    int num;
    printf("Enter the number for grouping : ");
    scanf("%d",&num);

    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);

    int t = 0;

    t = task(num,str,t);               // If you return a value . It must be stored into any variable.

    printf("\nThe string is : %s",str);
    printf("\nThe length of final string is : %d",t);
}