#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    printf("Enter the string 1 : ");
    scanf("%[^\n]%*c",str1);

    char str2[100];
    printf("Enter the string 2 : ");
    scanf("%[^\n]%*c",str2);

    int flag = 1;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2)
    {
        flag = 0;
        return 0;
    }

    int map1[256]={0};
    int map2[256]={0};

    for(int i=0;i<len1;i++)
    {
        char c1 = str1[i];
        char c2 = str2[i];

        if(map1[c1] == 0 && map2[c2] == 0)
        {
            map1[c1] = c2;
            map2[c2] = c1;
        }

        else if(map1[c1] != c2 || map2[c2] != c1)
        {
            flag = 0;
            break; 
        }
    }


    if(flag)
    {
        printf("Isomorphism");
    }
    else
    {
        printf("No");
    }
}