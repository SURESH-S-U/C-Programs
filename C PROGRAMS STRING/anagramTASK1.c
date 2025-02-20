#include<stdio.h>
#include<string.h>

int main()
{
    char word_1[100];
    printf("Enter the word 1 : ");
    scanf("%[^\n]%*c",word_1);
    
    char word_2[100];
    printf("Enter the word 2 : ");
    scanf("%[^\n]%*c",word_2);

    int len1 = strlen(word_1);
    int len2 = strlen(word_2);

    int count = 0;

    if(len1 == len2)
    {
        for(int i=0; i<len1; i++)
        {
            for(int j=0; j<len2; j++)
            {
                if(i != j && word_1[i] !=' ' && word_2[j] !=' ');
                {
                    if(word_1[i] == word_2[j])
                    {
                        word_1[i] = ' ';
                        word_2[j] = ' ';

                        count++;

                        break; 
                    }
                }
            }
        }

        if(count == len1)
        {
            printf("--- Anagram ---");
        }

        else
        {
            printf("--- Not anagram ---");
        }
    }
    else
    {
        printf("--- Not anagram ---");
    }
}