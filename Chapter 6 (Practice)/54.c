/* Write a program to print the address of a variable
   Use this address to print the value of this variable */

#include <stdio.h> 

int main()
{
    int a=6;
    int *ptr;
    ptr=&a;
    printf("the address of a is %u \n", ptr);
    printf("the value of a is %d \n", *ptr);
    return 0;
}


