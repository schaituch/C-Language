#include <stdio.h>

int main()
{
    int a = 69;
    int *b = &a; //b will now store the address of a
    printf("The value of a is : %d\n", a);
    printf("The value of a is : %d\n", *b);
    printf("The address of a is : %u\n", &a);
    printf("The address of a is : %u\n", b);
    printf("The address of b is : %u\n", &b);
    return 0;
}