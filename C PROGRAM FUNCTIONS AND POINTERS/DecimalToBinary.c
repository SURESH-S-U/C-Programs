#include<stdio.h>

int Binary(int decimal, int* binary)
{
    int i = 0;
    while(decimal > 0)
    {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    return i;
}

int main()
{
    int decimal;
    printf("Enter the decimal number : ");
    scanf("%d",&decimal);

    int binary[100];

    int index = Binary(decimal, binary);

    for(int i = index-1 ;i >= 0;i--)              // must print reverse .
    {
        printf("%d",binary[i]);
    }
}