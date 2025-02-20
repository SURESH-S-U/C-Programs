#include<stdio.h>
#include<math.h>

int Decimal(int binary)
{
    int remainder = 0;
    int decimal = 0;
    int i = 0;
    while (binary > 0)
    {
        remainder = binary % 10 ;
        decimal += remainder * pow(2 , i);
        binary /= 10;
        i++;
    }

    return decimal;
}

int main()
{
    long long binary;
    printf("Enter the binary number : ");
    scanf("%lld",&binary);

    printf("The decimal value is : %d", Decimal(binary));
}