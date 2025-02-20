#include <stdio.h>
#include <ctype.h>  // For isdigit(), isalpha(), and ispunct()
#include <string.h> // For strlen()

int main() {
    char str[100];
    int i, num_count = 0, alpha_count = 0, special_count = 0;

    printf("Enter a string: ");
    gets(str);  // Use fgets() instead of gets() in production code for safety.

    for(i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            num_count++;
        } else if (isalpha(str[i])) {
            alpha_count++;
        } else if (ispunct(str[i])) {
            special_count++;
        }
    }

    printf("Number of alphabets: %d\n", alpha_count);
    printf("Number of digits: %d\n", num_count);
    printf("Number of special characters: %d\n", special_count);

    return 0;
}





