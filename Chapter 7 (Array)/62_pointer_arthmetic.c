/* Pointer Arthmetic
A pointer can be incremented to point to the next memory location of that type */

#include <stdio.h> 

int main()
{
    int i=39;
    int *ptr = &i;
    printf("the value of ptr is %u \n", ptr);
    ptr++;      //1 integer = 4 bytes in vsc architecture, varies with diff architectures.
    printf("the value of ptr is %u \n", ptr);
    return 0;
}