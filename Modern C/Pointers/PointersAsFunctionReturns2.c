#include<stdio.h>
#include<stdlib.h>

void PrintHelloWorld(){
    printf("Hello, World!\n");
}

int *Add(int* a, int* b) { //Called Function

    int* c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}

int main()  { //Calling Function
    int a = 2, b = 4;
    int* ptr = Add(&a, &b); //a and b are integers local to main
    PrintHelloWorld();
    printf("Sum = %d\n", *ptr);
}
