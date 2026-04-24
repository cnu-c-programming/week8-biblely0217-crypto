#include <stdio.h>
#include <string.h>

int main() {
    char *p = "hello";
    char arr[6] = "hello";

    printf("%zu %zu\n", sizeof(p), strlen(p));
    printf("%zu %zu\n", sizeof(arr), strlen(arr));

    return 0;
}