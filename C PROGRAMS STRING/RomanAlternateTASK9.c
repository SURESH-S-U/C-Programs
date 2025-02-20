#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the romal value : ");
    scanf("%s",str);

    int HashTable['X'+1]  = {['I']=1, ['V']=5, ['X']=10, ['L']=50, ['C']=100, ['D']=500, ['M']=1000 };

    int len = strlen(str);
    int result = 0;

    for(int i=0;i<len ;i++)
    {
        if(str[i] != 'I' && str[i] != 'V' && str[i] != 'X' && str[i] != 'L' && str[i] != 'C' && str[i] != 'D' && str[i] != 'M' )
        {
            printf("--- Invalid input ---");
            break;
        }

        else
        {
            if(HashTable[str[i]] < HashTable[str[i+1]])
            {
                result -= HashTable[str[i]];     // Plus must near the = symbol  +=
            }
            else
            {
                result += HashTable[str[i]];
            }
        }
    }

    printf("The result is : %d",result);
}