#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    printf("Enter the name of first person : ");
    scanf("%[^\n]%*c",str1);

    char str2[100];
    printf("Enter the name of second person : ");
    scanf("%[^\n]%*c",str2);  

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char flames[] = "FLAMES";

    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(str1[i] == str2[j])
            {
                for(int k=i;k<len1;k++)
                {
                    str1[k] = str1[k+1];
                }

                len1--;
                i--;

                for(int l=j;l<len2;l++)
                {
                    str2[l] = str2[l+1];
                }

                len2--;

                j--;
                
                break;
            }
        }
    }

    int finlen1 = strlen(str1);
    int finlen2 = strlen(str2);

    int totletters = finlen1 + finlen2;

    printf("\nThe first name is : %s",str1);
    printf("\nThe second name is : %s",str2);
    printf("\nThe count is : %d",totletters);

    
    int flamelen = strlen(flames);

    int count = 0;

    for(int i = 0; flamelen > 1; i++)                // i must be iterate    flamelen > 1  times .
    {                                                //  because we didnot know how many times it will iterate.
        count++;

        if(count == totletters)
        {
            for(int k = i; k < flamelen; k++)
            {
                flames[k] = flames[k+1];
            }

            flamelen--;

            count = 0;

            i--;
        }

        if(flames[i+1] == '\0')          // this if must be  in the last.
        {
            i = -1;
        }
    }

    printf("\n the answer is :  %s",flames);
        
}
