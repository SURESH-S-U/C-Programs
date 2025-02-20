#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check(const char* s, const char* a, const char* b, int k, int index[], int* result_size) {
    int x = strlen(s);
    int y = strlen(a);
    int z = strlen(b);
    int count = 0;

    for (int i = 0; i <= x - y; i++) {
        if (strncmp(&s[i], a, y) == 0) {
            for (int j = 0; j <= x - z; j++) {
                if (strncmp(&s[j], b, z) == 0 && abs(j - i) <= k) {
                    index[count++] = i;
                    break;  
                }
            }
        }
    }
    *result_size = count;
}

int main() {
    char s[100], a[100], b[100];
    int k;
    int index[100];  // Assuming a maximum of 100 results
    int result_size = 0;

    printf("String = ");
    scanf("%[^\n]%*c", s);
    printf("a = ");
    scanf("%[^\n]%*c", a);
    printf("b = ");
    scanf("%[^\n]%*c", b);
    printf("k = ");
    scanf("%d", &k);

    check(s, a, b, k, index, &result_size);

    printf("[");
    for (int i = 0; i < result_size; i++) {
        printf("%d", index[i]);
        if(i < result_size - 1) printf(",");
    }
    printf("]");

    return 0;
}
