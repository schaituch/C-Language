#include <stdio.h>

int main()
{
    printf("---> Multiplication table of 13 in reverse order <--- \n");
    for (int i = 12; i; i--)
    {
        printf(" 13 x %d= %d \n", i, 13 * i);
    }

    return 0;
}