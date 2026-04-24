#include <stdio.h>
#include <string.h>

int main() {
    char *p = "hello";
    char arr[] = "hello";

    printf("sizeof(p): %zu\n", sizeof(p));
    printf("strlen(p): %zu\n", strlen(p));

    printf("sizeof(arr): %zu\n", sizeof(arr));
    printf("strlen(arr): %zu\n", strlen(arr));

    return 0;

}