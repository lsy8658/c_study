#include <stdio.h>

int f() {
    int x = 0;
    x = x+1;
    return x;
}

int main() {
    printf("%d\n", f());
    printf("%d\n", f());
    printf("%d\n", f());
}