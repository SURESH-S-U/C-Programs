#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, welcome to the world of C programming!";
    char substr[] = "world";
    
    char *pos = strstr(str, substr); // Find the first occurrence
    
    if (pos) {
        int index = pos - str;  // Calculate index
        printf("Substring found at index: %d\n", index);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}
