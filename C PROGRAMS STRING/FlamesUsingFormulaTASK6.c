#include<stdio.h>
#include<string.h>

int main()
{
    char name_1[100];
    printf("Enter the first name : ");
    scanf("%[^\n]%*c",name_1);

    char name_2[100];
    printf("Enter the second name : ");
    scanf("%[^\n]%*c",name_2);

    int len1 = strlen(name_1);
    int len2 = strlen(name_2);

    for(int i=0; i<len1 ;i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(name_1[i] == name_2[j])
            {
                for(int k=i;k<len1;k++)
                {
                    name_1[k] = name_1[k+1];
                }
                len1--;
                i--;

                for(int l=0;l<len2;l++)
                {
                    name_2[l] = name_2[l+1];
                }
                len2--;
                j--;

            }
        }
    }

    int remlet = strlen(name_1) + strlen(name_2);

    printf("\n The remaining of name 1 is : %s",name_1);
    printf("\n The remaining of name 2 is : %s",name_2);
    printf("\nThe count of remaining letters is : %d",remlet);


    char flames[] = "FLAMES";
    int flameslen = strlen(flames);

    int pos = 0;

    for(int i=0; flameslen > 1 ;i++)
    {
        pos = (pos + (remlet-1)) % flameslen;

        for(int j = pos;j<flameslen;j++)
        {
            flames[j] = flames[j+1];
        }

        flameslen--;
    }

    printf("\nThe Relationship between tow are : %s",flames);



}