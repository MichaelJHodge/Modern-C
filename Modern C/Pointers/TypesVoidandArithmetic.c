#include <stdio.h>
int main()
{
  int a = 1025;
  int *p;
  p = &a;
  printf("size of integer is %d bytes", sizeof(int));
  printf("address = %d, value = %d\n", p, *p);
  printf("address = %d, value = %d\n", p+1,*(p+1));

  char *p0;
  p0 = (char*)p; //typecasting - we convert one datatype (int) into another (char)
  printf("size of char is %d bytes\n", sizeof(char));
  printf("Address = %d, value = %d\n",p0, *p0);
  printf("address = %d, value = %d\n",p0+1, *(p0+1));
}
