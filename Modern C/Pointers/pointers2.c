#include <stdio.h>
int main()
{
    int a;
    int *p;
    a = 10;
    p = &a; // &a = the address of a
    printf("Address of P is %d\n",p);
    printf("Value at P is %d\n", *p);
    int b = 20;
    *p = b; // this modifies the VALUE of p
    printf("Address of P is %d\n",p);
    printf("Value at P is %d\n", *p);
}
