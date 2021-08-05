//Write a C program to find out the biggest of given 3 numbers
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of 1st number : \n");
    scanf("%d", &a);
    printf("Enter the value of 2nd number : \n");
    scanf("%d", &b);
    printf("Enter the value of 3rd number : \n");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the biggest number of given 3 numbers", a);
        }
    }
    else if (b > c)
    {
        printf("%d is the biggest number of given 3 numbers", b);
    }
    else
    {
        printf("%d is the biggest number of given 3 numbers", c);
    }

    return 0;
}