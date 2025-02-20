#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    printf("Enter the string contais of number  alphabets and special characters : ");
    scanf("%[^\n]%*c",str);

    int alphacount = 0;
    int digitcount = 0;
    int specialcount = 0;

    for(int i=0; i <strlen(str) ; i++)
    {
        if(isalpha(str[i]))                // isalpha used to check it is character  or not. 
        {
            if(isupper(str[i]))
            {
                str[i] = tolower(str[i]);
            }

            else if(islower(str[i]))
            {
                str[i] = toupper(str[i]);       // toupper or tolower is used to chenge into upper and lower respectively.
            }

            alphacount++;
        }

        else if(isdigit(str[i]))         // isdigit is used to check it is number or not .
        {
            digitcount++;
        }

        else if(ispunct(str[i]))        // ispunct used to chect it is special character.
        {
            specialcount++;
        }

    }

    printf("\nThe string is : %s",str);
    printf("\nThe character count is : %d",alphacount);
    printf("\nThe number count is : %d",digitcount);
    printf("\nThe special character count is : %d",specialcount);
}