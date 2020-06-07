#include<stdio.h>

void PrintHello(char *name)
{
  printf("Hello %s\n", name);
}

int main()
{
  void (*ptr)(char*);
  ptr = PrintHello;
  ptr("Michael");
}
