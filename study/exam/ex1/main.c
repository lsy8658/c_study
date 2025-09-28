#include <stdio.h>
#include "a.h"

int f(int x1, int x2, int x3);
int g(int x1, int x2, int x3);

int main() {
    int a = 1, b = 2, c = 3;
    printf("%d, %d, %d\n", A, B, C);
    printf("%d\n", f(a, b, c) + g(a, b, c));
}