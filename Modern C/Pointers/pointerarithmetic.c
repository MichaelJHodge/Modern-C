#include<stdio.h>
int main()
{
  int a = 10;
  int *p;
  p = &a;
  // Pointer arithmetic
  printf("Address p is %d\n", p); // p is 2002
  printf("Value at address p is %d\n", *p);
  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Address p+1 is %d\n", p+1); // p + 1 is 2006 because the size of an integer is 4 bytes
  printf("value at address p + 1 is %d\n", *p+1);

}
