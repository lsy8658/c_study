// #include <stdio.h>
// #include <limits.h>
// int main() {
//     short int minShrt = SHRT_MIN;   // short int���� �ּڰ�
//     short int maxShrt = SHRT_MAX;   // short int���� �ִ�
//     printf("short int�� ũ��: %zu\n", sizeof(short int));
//     printf("short int �ڷ��� ����: %d ~ %d\n", minShrt, maxShrt);
// }

#include <stdio.h>
#include <float.h>
int main() {
    float minFlt = FLT_MIN;   // float���� ���� �̼��� ��
    float maxFlt = FLT_MAX;   // float���� ���� ū�� ��
    printf("float�� ũ��: %zu\n", sizeof(float));
    printf("float �ڷ��� ����: %e ~ %e\n", minFlt, maxFlt);
}