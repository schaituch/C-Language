#include <stdio.h> 

int main()
{
    FILE *ptr;
    ptr=fopen("putcdemo.txt", "w");
    putc('c', ptr);
    putc('h', ptr);
    putc('a', ptr);
    putc('i', ptr);
    putc('t', ptr);
    putc('u', ptr);
    fclose(ptr);
    return 0;
}