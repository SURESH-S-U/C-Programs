#include<stdio.h>

int increasing(int* arr, int num, int* b)
{
    int count = 1;
    int t = 0;
    for (int i = 0; i < num - 1; i++)  // Fix: Changed condition to num - 1
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
        else
        {
            b[t++] = count;
            count = 1;
        }
    }
    b[t++] = count;

    return t;  // Fix: Changed from t-1 to t
}

int decreasing(int* arr, int num, int* b, int t)
{
    int count = 1;
    for (int i = 0; i < num - 1; i++)  // Fix: Changed condition to num - 1
    {
        if (arr[i] > arr[i + 1])
        {
            count++;
        }
        else
        {
            b[t++] = count;
            count = 1;
        }
    }
    b[t++] = count;

    return t;  // Fix: Changed from t-1 to t
}

int main()
{
    int num;
    printf("Enter the number of inputs: ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int b[num * 2];

    int t = increasing(arr, num, b);
    t = decreasing(arr, num, b, t);

    int max = 0;

    for (int i = 0; i < t; i++)  // Fix: Changed condition to i < t
    {
        if (b[i] > max)
        {
            max = b[i];
        }
    }

    printf("\nThe maximum distance in both is : %d", max);

    return 0;
}
