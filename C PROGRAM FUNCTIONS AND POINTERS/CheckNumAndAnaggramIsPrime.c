#include<stdio.h>
#include<math.h>

int isprime(int i)
{
    for(int j=2; j<=sqrt(i) ;j++)
    {
        if(i % j == 0)
        {
            return 0;
        }
    }

    return 1;
}


int isanagram(int i , int j)
{
    int temp[10] = {0};

    while(i != 0)
    {
        temp[i % 10]++;
        i/= 10;
    }

    while(j != 0)
    {

        temp[j % 10]--;
        j/=10;
    }

    for(int k=0; k<10 ;k++)
    {
        if(temp[k] != 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int digit;
    printf("Enter the digit : ");
    scanf("%d",&digit);

    int totnum = pow(10,digit);
    int prime[totnum];
    int t = 0;

    for(int i=0;i<totnum;i++)
    {
        if(isprime(i) == 1)
        {
            prime[t++] = i;
        }
    }

    int count = 0;

    for(int i=0; i<t ;i++)
    {
        for(int j=i+1;j<t;j++)
        {
            int c = log10( prime[i] ) +1 ;
            int d = log10( prime[j] ) +1 ;

            if( isanagram( prime[i] ,prime[j] ) == 1 && c == digit && d == digit)
            {
                printf("%d and %d\n",prime[i] , prime[j]);
                count++;
            }
        }
    }

    printf("The count of prime and anagramic prime is : %d",count);

}