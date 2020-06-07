// Pointers can point to data
// Pointers can point to functions
// In C, the source code we write is compiled into
// machine code (which is binary)

// In memory, a function will be one contingious block.
// The address of a function is the address of the
// first instructure in the block.

// Function pointers store the entry point/starting block
// of the block of memory which contains all the instructions
// in the function


#include<stdio.h>
int Add(int a, int b)
{
  return a+b;
}
int main()
{
  int c;
  int (*p)(int,int);
  p = &Add; // P now points to Add
  c = (*p)(2, 3); // Dereferencing and executing the function
  printf("%d\n",c);
}
