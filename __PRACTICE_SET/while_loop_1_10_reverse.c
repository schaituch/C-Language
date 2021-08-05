//Write a program to print 1 to 10 numbers using a while loop
#include <stdio.h>

int main()
{
    int n=10;
    while (n<=10 && n>=1)
    {
        printf("%d \n", n);
        n--;
    }
    return 0;

}