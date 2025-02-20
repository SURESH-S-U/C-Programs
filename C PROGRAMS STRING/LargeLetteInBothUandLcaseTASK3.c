#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[1000];
    printf("Enter the string : ");
    scanf("%s",str);
    int len = strlen(str);

    int k=0;
    char b[1000];
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
           if(str[i] != str[j])
           {
                if(str[i] == toupper(str[j]))
                {
                    b[k] = str[i];
                    k++;
                   
                }
           }
           
        }
    }

  int lenb=strlen(b);
  
    for(int i=0;i<lenb;i++)
    {
        b[i]=toupper(b[i]);
    }

    for(int i=0;i<lenb;i++)
    {
        for(int j=i+1;j<lenb;j++)
        {
            if(b[j] > b[i])
            {
                int temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }

    printf("The largest letter in both upper and lower case is : %c ",b[0]);
}