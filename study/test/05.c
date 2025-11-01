#include <stdio.h>
int test1() {
    int x = 10, y = 3;
    printf("x = %d, y= %d\n", x,y);
    printf("x + y = %d\n",  x + y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n", x % y);
    printf("y %% x = %d\n", y % x);
}

// ===========================================

int test2 () {
    int x = 5, a, b;
    a = ++x * x--;
    b = x * 10;
    printf("a = %d, b = %d, x = %d\n", a,b,x);
    // printf("a = %d", a);
}

// ===========================================

int test3 () {
    int a = 5, b = 10, c;
    c = a++ > 0 || --b < 0;
    printf("a = %d, b = %d, c = %d\n", a,b,c);

}

// ===========================================

int test4 () {
    float a = 1.5;
    int b; // b는 int 타입이라 소수저을 저장할 수 없음
    float c;
    c = b = a;
    printf("b = %d, c = %f\n", b, c);
}

// c = 1.000000 b = 1
// ===========================================

int test5 () {
    int a = 10, b = 3, c = 1;
    a *= b - 1;
    b /= 2 + 3;
    c += 2;
    printf("a = %d, b = %d, c = %d\n", a,b,c);
}

// a = 20, b = 0, c = 3

// ===========================================

int main () {
    test5();
}


