#include<stdio.h>
#include<math.h>

int isprime(int num,int digit)
{
    for(int j=2;j<=sqrt(num);j++)
    {
        if(num % j == 0)
        {
            return 0;
        }

    }
    return 1;
}

int rotate(int num,int digit)
{
    int power = pow(10,digit-1);
    int last = num%10;

    int rotate = (last*power)+(num/10);

    return rotate;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int digit = log10(num)+1;

    int count = 0 ;
    for(int i=0;i<digit;i++)
    {
        if(isprime(num,digit))
        {
            count++;
        }

        num = rotate(num,digit);
    }

    if(count == digit)
    {
        printf("circular prime");
    }
    else
    {
        printf("no");
    }
}