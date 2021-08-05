// Write a C program to check whether the given number is even or odd.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number given is EVEN ", num);
    }
    else
    {
        printf("the number given is ODD ", num);
    }

    return 0;
}