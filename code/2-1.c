#include <stdio.h>

int main() {
    char arr[] = "hello";
    char *ptr = "hello";

    arr[0] = 'H';

    printf("%s\n", arr);
    printf("%s\n", ptr);

    return 0;
}