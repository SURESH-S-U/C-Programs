#include<stdio.h>                   // Permutation formula   n! / n-r ! 

int fac(int num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fac(num - 1);
    }
}

int main()                           
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    int r;
    printf("Enter the value of r : ");
    scanf("%d",&r);

    int bass =  n - r;

    int Numerater = fac(n);
    printf("The value of n! is : %d\n",Numerater);

    int Denominator = fac(bass);
    printf("The value of denominater ! is : %d\n",Denominator);

    int permutation = Numerater / Denominator;

    printf("The permutation is : %d",permutation);
}