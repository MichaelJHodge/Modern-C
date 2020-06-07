#include<stdio.h>
void Increment(int *p) // This program uses a call by reference

// we dereference the pointer, and increment its value by 1
{
  *p = (*p) +1;
}
int main()
{
  int a;
  a = 10;
  Increment(&a);
  printf("a = %d\n", a);
  //printf("a = %d\n", a);
}
