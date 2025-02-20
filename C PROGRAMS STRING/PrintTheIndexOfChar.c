#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str);

    int len = strlen(str);

    char character;
    printf("Enter the character : ");
    scanf(" %c",&character);

    for(int i=0; i<len ;i++)
    {
        if(str[i] == character)
        {
            printf("The index of the character is : %d ",i);
        }
    }
}