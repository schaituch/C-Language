#include <stdio.h> 
#include <string.h>     //String library functions header file

int main()
{
    char st[]="Hello_Chaitanya";
    int a = strlen(st);                /*strlen: gives string length which includes spaces b/w words and
                                         excluding the null character */   
    printf("the length of a is %d", a);
    return 0;
}