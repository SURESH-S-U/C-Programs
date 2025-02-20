#include<stdio.h>
#include<string.h>

char* firstcheck(char *str, char* line1, char* line2 , char* line3)
{
    char var = str[0];

    static char mainstr[100];                         // Put static is must for   local variable   string .
     
    if(strchr(line1 , var))
    {
        strcpy(mainstr, line1);
    }

    else if(strchr(line2 , var) )
    {
        strcpy(mainstr, line2);
    }

    else if(strchr(line3 , var))
    {
        strcpy(mainstr, line3);
    }

    return mainstr;

}

int main()
{
    char line1[100] = "qwertyuiop";
    char line2[100] = "asdfghjkl";
    char line3[100] = "zxcvbnm";

    int num;
    char  str[100][100];
    printf("Enter the number of string : ");
    scanf("%d",&num);

    printf("Enter the string : \n");
    for(int i=0;i<num;i++)
    {
        scanf("%s",str[i]);
    }

    printf("The output is : ");
    
    int flag = 1;
    
    for(int i=0; i<num ;i++)
    {
        char* keyline = firstcheck(str[i], line1, line2, line3);

        int len = strlen(keyline);
        for(int j=0;j<len;j++)
        {
            if( ! (strchr(keyline , str[i][j]) != NULL) )
            {
                flag = 0;
            }
        }

        if(flag)
        {
            printf("\n%s",str[i]);
        }
    }
    
}