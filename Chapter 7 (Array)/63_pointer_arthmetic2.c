#include <stdio.h> 

int main()
{
    char i=39;
    char *ptr = &i;
    printf("the value of ptr is %u \n", ptr);
    ptr++;      //1 char = 1 byte in vsc architecture, varies with diff architectures.
    printf("the value of ptr is %u \n", ptr);
    return 0;
}