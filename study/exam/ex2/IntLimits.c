// #include <stdio.h>
// #include <limits.h>
// int main() {
//     short int minShrt = SHRT_MIN;   // short int형의 최솟값
//     short int maxShrt = SHRT_MAX;   // short int형의 최댓값
//     printf("short int의 크기: %zu\n", sizeof(short int));
//     printf("short int 자료형 범위: %d ~ %d\n", minShrt, maxShrt);
// }

#include <stdio.h>
#include <float.h>
int main() {
    float minFlt = FLT_MIN;   // float형의 가장 미세한 값
    float maxFlt = FLT_MAX;   // float형의 가장 큰한 값
    printf("float의 크기: %zu\n", sizeof(float));
    printf("float 자료형 범위: %e ~ %e\n", minFlt, maxFlt);
}