#include <stdio.h>
#include <string.h>

void findSubStringIndexes(const char *str, const char *substr) {
    int lenStr = strlen(str);
    int lenSubstr = strlen(substr);
    
    for (int i = 0; i <= lenStr - lenSubstr; i++) {
        if (strncmp(&str[i], substr, lenSubstr) == 0) {
            printf("Substring found at index: %d\n", i);
        }
    }
}

int main() {
    char str[] = "world is a world of opportunities in the world";
    char substr[] = "world";
    
    findSubStringIndexes(str, substr);
    
    return 0;
}
