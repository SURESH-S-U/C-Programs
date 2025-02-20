#include<stdio.h>
#include<string.h>

int function(int number , int *product)
{
    *product = number * number;

    return 1;
}

int main()
{
    int num1;
    printf("Enter the num 1 : ");
    scanf("%d",&num1);

    int num2;
    printf("Enter the num 2 :");
    scanf("%d",&num2);

    int product = 1;

    if(function(num1 , &product))
    {
        printf("\nThe product of num 1 is : %d",product);
    }

    if(function(num2 , &product))
    {
        printf("\nThe product of num 2 is : %d",product);
    }
}