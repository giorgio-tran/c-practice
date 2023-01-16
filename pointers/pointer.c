#include <stdio.h>

int main() {
  int a = 10;
  // pointer
  int* pa = &a;
  // pointer to a pointer
  int** ppa = &pa;

  printf("Memory address of a: %p\n", pa);
  printf("The value of a is: %i\n", *pa);
  printf("Testing int**: %p\n", *ppa);
  return 0;
}