#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[5] = {};
    printf("Enter the sring of 4 digits : ");
    for(int i=0;i<4;i++)
    {
        scanf("%s",&str[i]);
    }
    
    int len = strlen(str);

    int max = -1;
    int first ;
    int second ;

    int flag = 1;

    int count1 = 0;
    int count2 = 0; 

    for(int i=0; i<len;i++)
    {
        if( ! (isdigit(str[i])) )
        {
            flag = 0;
            break;
        }

    }

    // for hours portion.

    for(int i=0; i<len ;i++)
    {
        for(int j=0; j<len ;j++)
        {
            if( i != j)
            {
                int temp = ((str[i]-'0')*10) + str[j]-'0';

                if(temp < 24 && temp > max)
                {
                    max = temp;
                    first = i;
                    second = j;

                    count1++;
                }
            }
        }
    }

  // for minutes portion.

        int max2 = -1;

        str[first] = ' ';
        str[second] = ' ';

        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len;j++)
            {
                if(i != j)
                {
                    if(str[i] != ' ' && str[j] != ' ')
                    {
                        int temp2 = ((str[i]-'0')*10) + str[j]-'0';

                        if(temp2 < 60 && temp2 > max2)
                        {
                            max2 = temp2;
                            count2++;
                        }
                    }
                }
            }
        }

        if(flag == 1 && count1 >= 1 && count2 >= 1)
        {
            printf("%02d : %02d",max,max2);      // %02d for print the values in 2 digits.

        }

        else
        {
            printf("--- Invalid input ---");
        }

}


