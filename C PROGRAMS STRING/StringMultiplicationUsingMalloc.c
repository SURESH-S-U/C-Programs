#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* multiply(char* num1, char* num2) {
    int f = atoi(num1);  // Convert num1 to integer
    int s = atoi(num2);  // Convert num2 to integer

    int mul = f * s;     // Multiply the integers
    char* str = (char*)malloc(100 * sizeof(char));  // Allocate enough memory

    sprintf(str, "%d", mul);  // Store the result as a string
    int len = strlen(str);    // Find the length of the result string

    str = (char*)realloc(str, (len + 1) * sizeof(char));  // Resize the memory

    return str;  // Return the dynamically allocated string
}
