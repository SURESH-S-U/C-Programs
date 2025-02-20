#include<stdio.h>
#include<string.h>
#define MAX 1000

int main()
{
    char str[MAX];
    printf("Enter the ROMWN values :");
    scanf("%s",str);

    int len = strlen(str);
    int count = 0;

    for(int i=0;i<len;i++)
    {
        if(str[i] == 'I'|| str[i] =='V' || str[i] =='X' || str[i] =='L' || str[i] =='C' || str[i] =='D' || str[i] =='M' )
        {
            count++;
        }

        else
        {
            printf("---- Invalid Input ----");
            break;
        }
    }

    int num = 0;

    int i = 0;
    
 if(count == len)
 {
    while(i<len)
    {
        if(str[i] == 'I' && str[i+1] == 'V')
        {
            num = num+4;
            printf("\n4");

            i=i+2;
        }

        else if(str[i] == 'I' && str[i+1] == 'X')
        {
            num = num+9;
            printf("\n9");

            i=i+2;
        }

        else if(str[i] == 'X' && str[i+1] == 'L')
        {
            num = num+40;
            printf("\n40");

            i=i+2;

        }

        else if(str[i] == 'X' && str[i+1] == 'C')
        {
            num = num+90;
            printf("\n90");

            i=i+2;
        }

        else if(str[i] == 'C' && str[i+1] == 'D')
        {
            num = num+400;
            printf("\n400");

            i=i+2;
        }
        
        else if(str[i] == 'C' && str[i+1] == 'M')
        {
            num = num+900;
            printf("\n900");
            
            i=i+2;
        }

        else if(str[i] == 'I')
        {
            num = num+1;
            printf("\n1");

            i++;
        }

        else if(str[i] == 'V')
        {
            num = num+5;
            printf("\n5");

            i++;
        }

        else if(str[i] == 'X')
        {
            num = num+10;
            printf("\n10");

            i++;
        }

        else if(str[i] == 'L')
        {
            num = num+50;
            printf("\n50");

            i++;
        }

        else if(str[i] == 'C')
        {
            num = num+100;
            printf("\n100");

            i++;
        }

        else if(str[i] == 'D')
        {
            num = num+500;
            printf("\n500");

            i++;
        }

        else if(str[i] == 'M')
        {
            num = num+1000;
            printf("\n1000");
            
            i++;
        }
        
    }

    printf("\n");
    printf("The NUMBER is : %d",num);
 }

}