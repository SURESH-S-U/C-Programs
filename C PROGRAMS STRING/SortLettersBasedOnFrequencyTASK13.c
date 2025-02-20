#include<stdio.h>
#include<string.h>
#define MAX 1000

int main()
{
    char str[MAX];
    printf("Enter the string : ");
    scanf("%s",str);

    int freq[100];
    int c =0;

    int len = strlen(str);

//  count the frequency of each character   and     remove duduplicate characters

    for(int i=0;i<len;i++)
    {
        int count = 0;

        for(int j=i+1;j<len;j++)                  // we arragrd the character and the frequency respectively in different arrays.
        {                                         // example  :  input = abbccc
            if(str[i] == str[j])                  //    str = [abc]
            {                                     //    freq = [1,2,3]

                count++;                          //   so we have to sort both the strings based on the frequency 
                for(int k=j;k<len;k++)
                {
                    str[k] = str[k+1];
                }
                len--;
                j--;
            }
        }
        
        freq[c] = count;
        c++;
    }

// sort the string an based on the frequency.

    int lenfinal = strlen(str);

    for(int i=0;i<lenfinal;i++)
    {
        for(int j=i+1 ;j<lenfinal;j++)
        {
            if(freq[i] < freq[j])                   // we sort the character string based on the frequency by sort the frequency.
            {                                        // like ......  int temp = freq[i];
                int temp = freq[i];                  //              freq[i]  = freq[j];
                freq[i] = freq[j];                    //              freq[j]  = temp;
                freq[j] = temp;
                                
                int temp2 = str[i];                  
                str[i] = str[j];                       
                str[j] = temp2;
            }
        }
    }


printf("The string based on Frequency is : ");

    for(int i=0;i<lenfinal;i++)
    {
        for(int j=0; j <= freq[i] ; j++)
        {
            printf("%c",str[i]);
        }
    }

}