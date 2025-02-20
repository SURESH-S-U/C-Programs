#include<stdio.h>
#include<string.h>

int main()
{
    int num_words;
    printf("Enter the number of words : ");
    scanf("%d",&num_words);

    char str[100][100];
    
    for(int i=0; i<num_words; i++)
    {
        scanf("%s",str[i]);
    }

    for(int i=0;i<num_words;i++)
    {
        if(i % 2 != 0)
        {
            printf("\n%s",str[i]);
        }
    }
}