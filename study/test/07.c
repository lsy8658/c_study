#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// ----------------------------------


// ----------------------------------

int fncMath () {
  double x = 12.34;
  int i = -5;
  int a,b,c,d,e,f;
  a = (int) ceil(x); // ????
  b = (int) floor(x); // ????
  c = (int) pow(4, 2);

  printf("abs(-5) = %d\n", abs(i));
  printf("ceil => %d\n", a);
  printf("floor => %d\n", b);
  printf("cos => %f\n", cos(10));
  printf("exp => %f\n", exp(2));
  printf("sqrt => %d\n", sqrt(2));
  printf("pow => %d\n", c);
};
// ----------------------------------

int swap (int *a, int *b) { 
  int temp = *a;
  *a = *b;
  *b = temp; 
}

// ----------------------------------

// ----------------------------------

// ----------------------------------

// ----------------------------------
// void test () {
//   int a = 0;
//   static int b = 0;
//   printf("auto => %d  static => %d\n", a,b);
//   ++a;
//   ++b;
// }

// int varTest () {
//   for (int i = 0; i < 3; i++) {
//     test();
//   }   
// }

// ----------------------------------
int a = 20;
int b = 20;
void externFn () {
  extern int k; // extern ??? ?? ?? ??.
  printf("a => %d", a);
  printf("k => %d", k);
}

int k = 50;
// ----------------------------------
int main () {
//  int x =  5, y = 3;
//  swap(&x, &y);
//  printf("x => %d y => %d", x,y);
  externFn();


}

// ----------------------------------
