#include <stdio.h>

int main()
{
    int i = 1;
    printf("---> Multiplication table of 12 <--- \n \n");
    do
    {
        printf(" 12 x %d = %d \n", i, 12 * i);
        i++;
    } while (i <= 20);

    return 0;
}