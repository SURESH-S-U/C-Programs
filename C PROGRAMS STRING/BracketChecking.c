#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the string with only brackets : ");
    scanf("%s",str);

    int len =  strlen(str);

    char stack[100];

    int flag = 1;
    int top = -1;

    for(int i=0 ;i<len ;i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            stack[++top] = str[i];                          //  ++ top means   pre increment.  increment first and store.
        }
        
        else if(str[i]==')' || str[i]=='}' || str[i]==']')
        {
            if(top == -1)
            {
                flag = 0;
                break;
            }

            else
            {
                char last = stack[top--];               //  top--    post increment first function then incremennt. 

                if( ! (str[i] == '}' && last == '{'  ||  str[i] == ']' && last == '['   || str[i] ==')' && last == '('   ))
                {
                    flag = 0;
                    break;
                }
            }

        }
    }

    if( top != -1)
    {
        flag = 0;
    }

    if(flag)
    {
        printf("--- True ---");
    }

    else
    {
        printf("--- False ---");
    }
}