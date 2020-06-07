#include <stdio.h>
int main()
{
    int a;
    int *p;
    a = 10;
    p = &a;
    printf("%d\n",p); // &a = the address of a
    printf("%d\n",*p); // *p = value at address that p points to
    printf("%d\n", &a); // again, &a will give us the value of a.
}
