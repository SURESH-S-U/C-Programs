#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int initial_size = 3;
    int new_size = 5;

    // Step 1: Allocate memory for 3 integers using malloc
    arr = (int *)malloc(initial_size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Step 2: Initialize the array
    for (int i = 0; i < initial_size; i++) {
        arr[i] = i + 1;  // Assigning values 1, 2, 3
    }

    // Printing the initial array
    printf("Initial array values: ");
    for (int i = 0; i < initial_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 3: Reallocate memory to hold 5 integers
    arr = (int *)realloc(arr, new_size * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Step 4: Initialize the newly added elements
    for (int i = initial_size; i < new_size; i++) {
        arr[i] = i + 1;  // Assigning values 4, 5
    }

    // Printing the array after reallocation
    printf("Array values after reallocation: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 5: Free the allocated memory
    free(arr);

    return 0;
}
