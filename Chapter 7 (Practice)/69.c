/* Write a program to create an array of 12 integers and store
multiplication table of n(user input) in it. */

#include <stdio.h>

int main()
{
    int mul[12];
    int n;
    printf("Enter the number for which multiplication table is required : \n");
    scanf("%d", &n);

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