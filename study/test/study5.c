// /* 두 수를 입력 받아
// 평균을 구한 후 출력 */
// #include <stdio.h>
// int main() {
//     int x, y; // 변수 선언문
//     float average;
//     /* 변수 x, y를 입력 받음 */
//     scanf("%d %d", &x, &y);
//     // 두 수의 평균을 구해 average에 저장
//     average = (x + y) / 2.0;
//     // 결과를 화면에 출력
//     printf("Average = %f\n", average);
// }

// #include <stdio.h>
// #define PI 3.141592
// #define ST '3.141592'
// int main() {
//     double r = 10.0;
//     printf("%lf\n", PI * r * r);
// }

// #include <stdio.h>
// #define C_AREA(x) (3.141592 * (x) * (x))
// int main() {
//     double r = 10.0;
//     printf("%lf\n", C_AREA(r));
// }

// #include <stdio.h>
// #define C_AREA(x) (3.141592 * (x) * (x))
// int main() {
//     double r = 5.0;
//     printf("%lf\n", C_AREA(r + 5));
// }

// #include <stdio.h>
// #define C_AREA(x) (3.141592 * x * x)
// int main() {
//     double r = 5.0;
//     printf("%lf\n", C_AREA(r + 5));
// }



// #include <limits.h>
// int main() {
//     int minInt = INT_MIN;
//     int maxInt = INT_MAX;
//     printf("int의 크기: %zu\n", sizeof(int));
//     printf("int 자료형 범위: %d ~ %d\n", minInt, maxInt);
// }

#include <stdio.h>
int main() {
    int a = 369;
    double b = 314.1592;
  
    // printf("***%05d***\n", a); //원하는 출력: ***00369***
    // printf("***%+5d***\n", a); //원하는 출력: *** +369***
    // printf("***%-5d***\n", -a); //원하는 출력: ***-369 ***
    // printf("***%8.1f***\n", b); //원하는 출력: ***   314.2***
     printf("***%+8.2e***\n", b); //원하는 출력: *** 3.14e+02***
}

// #include <stdio.h>
// int main() {
//     int a = 369;
//     double b = 314.1592;

//     printf("***%05d***\n", a);       // ㈀: ***00369***
//     printf("***%+6d***\n", a);       // ㈁: *** +369***
//     printf("***%-5d***\n", -a);      // ㈂: ***-369 ***
//     printf("***%8.1f***\n", b);      // ㈃: ***   314.2***
//     printf("***%10.2e***\n", b);     // ㈄: *** 3.14e+02***

//     return 0;
// }