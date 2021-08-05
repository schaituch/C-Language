#include <stdio.h> 
#include <stdlib.h>

int main()
{
    // EXAMPLE 1
int* ptr = (int*)malloc(sizeof(int));
free(ptr);

// ptr is a dangling pointer now and operations like following are invalid
*ptr = 10; // or printf("%d", *ptr);

    return 0;
}

/* Dangling Pointer is a pointer that doesn’t point to a valid memory location.
Dangling pointers arise when an object is deleted or deallocated, without
  modifying the value of the pointer, so that the pointer still points to 
  the memory location of the deallocated memory */