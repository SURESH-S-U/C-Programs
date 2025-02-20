#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// method 1 : to convert whole numbers only.

int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]%*c",str);

    int num = atoi(str);

    printf("The integer number is : %d",num);

    


    // method 2 : to convert decimal also.



    float num2 = strtod(str , NULL);

    printf("\n The decimal number is : %.2f",num2);

}