#include<stdio.h>
int main()
{
  int x = 5;
  int *p;
  p = &x;
  *p = 6;
  int **q; // This can store the address of p (a pointer)
  // ** notation for a pointer to a pointer
  q = &p; //we create a pointer to a pointer
  printf("%d\n",*p);
  printf("%d\n",*q);
  printf("%d\n",*(*q));
  **q = 10; //we modify the value of x here
  printf("x = %d\n",x);
  printf("x = %d\n",x+5);
}
