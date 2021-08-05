// Write a C program to find biggest in the given two numbers

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of 1st number : \n");
    scanf("%d", &a);
    printf("Enter the value of 2nd number : \n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("\n %d is the biggest number of given two numbers", a);
    }
    else if (a = b)
    {
        printf("Both numbers are equal !", a, b);
    }
    else
    {
        printf("\n %d is the biggest number of given two numbers", b);
    }
    return 0;
}