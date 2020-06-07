#include <stdio.h>
int main()
{
    int a;
    int *p;
    a = 10;
    p = &a; // &a = the address of a
    printf("a = %d\n",a);
    *p = 12; // the value at address p is now 12 (this is dereferencing!!)
    printf("a = %d\n",a);
}
