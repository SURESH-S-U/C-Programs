#include<stdio.h>                 // The code is sum of positive num in matrix and gratest num in each row and column.

int Sum(int row, int col ,int arr[][col])
{
    int positive = 0;
    int sumrowcol = 0;

    for(int i=0;i<row;i++)
    {    
        int rowmax = 0;
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] >= 0)
            {
                positive++;
            }

            if(arr[i][j] > rowmax)
            {
                rowmax = arr[i][j];
            }
        }

        sumrowcol += rowmax;
    }

    int colmax = 0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[j][i] > colmax)
            {
                colmax = arr[j][i];
            }
        }

        sumrowcol += colmax;
    }

    return positive + sumrowcol;
}

int main()
{
    int row;
    printf("Enter the row : ");
    scanf("%d",&row);

    int col;
    printf("Enter the column : ");
    scanf("%d",&col);

    int arr[row][col];
    printf("Enter the matrix : \n");

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("%d", Sum(row, col, arr));
}