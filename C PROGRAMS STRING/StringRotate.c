#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the  string : ");
    scanf("%s",str);
    int len = strlen(str);

    char temp[100];
    char temp2[100];
    int t1=-1;
    int t2=-1;

    int num;
    printf("Enter the  number : ");
    scanf("%d",&num);

    for(int i=0;i<num;i++)          // it is left rotate.
    {                               // in the case of right rotate run the loop in the reverse order.
        temp[++t1]=str[i];
    }
    for(int i=num;i<len;i++)
    {
        temp2[++t2]=str[i];
    }
    strcat(temp2,temp);
    printf("%s",temp2);
}