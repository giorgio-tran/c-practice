#include <stdio.h>

int main() {
  int a = 10;
  int *pa = &a;
  // pointer arithmetic
  printf("%d\n", pa);
  printf("size of integer is %d bytes \n", sizeof(int)); //size of int is 4 bytes
  printf("%d\n", pa+1); //we cna see that 4 is added here
  return 0;
}