#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000

int Second_Largest(char*str ,int len)
{
    int largest = 0 , secondlargest = 0 ;
    for(int i=0 ; i<len ;i++)
    {
        if(isdigit(str[i]))
        {
            int digit = str[i] - '0';

            if(digit > largest)
            {
                secondlargest = largest;
                largest = digit;
            }

            else if(digit > secondlargest && digit < largest)
            {
                secondlargest = digit;
            }
        } 
    }

    return secondlargest;
}


int main()
{
    char str[MAX];
    printf("Enter the string : ");
    scanf("%s",str);

    int len = strlen(str);

    int result = Second_Largest(str , len);

    if(result != 0)
    {
        printf("The second largest digit is : %d" ,result);
    }

    else
    {
        printf("----- There is no second largest digit ----");
    }
}