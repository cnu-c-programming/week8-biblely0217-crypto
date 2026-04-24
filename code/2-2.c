#include <stdio.h>

void foo() {
    char *p = "hello";
    printf("%p\n", p);
}

void bar() {
    char *p = "hello";
    printf("%p\n", p);
}

int main() {
    foo();
    bar();
    return 0;
}