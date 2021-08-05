/* Write a program to create an array of 12 integers and store
multiplication table of 5 in it. */

#include <stdio.h>

int main()
{
    int mul[12];
    int n =5;

    for (int i = 0; i < 12; i++)
    {
        mul[i] = n * (i + 1);
    }

    for (int i = 0; i < 12; i++)
    {
        printf("%d x %d = %d \n", n, i + 1, mul[i]);
    }

    return 0;
}