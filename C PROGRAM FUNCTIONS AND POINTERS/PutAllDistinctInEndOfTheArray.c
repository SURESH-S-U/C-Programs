#include <stdio.h>

void moveDistinctToLast(int arr[], int size) {
    int i, j;
    int isDistinct;
    int lastPos = size - 1;

    for (i = 0; i < lastPos; i++) 
    {
        isDistinct = 1;

        for (j = 0; j < size; j++) 
        {
            if (i != j && arr[i] == arr[j]) {
                isDistinct = 0;
                break;
            }
        }

        if (isDistinct) 
        {
            int temp = arr[i];
            arr[i] = arr[lastPos];
            arr[lastPos] = temp;
            lastPos--; 
            i--;        // Stay at the same position to check the new element
        }
    }

    printf("Array after moving distinct elements to the last: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    moveDistinctToLast(arr, size);

    return 0;
}
