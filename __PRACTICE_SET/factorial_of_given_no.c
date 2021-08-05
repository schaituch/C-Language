//Write a C program to print factorial of a given number
#include <stdio.h> 

int main()
{
    int factorial=1, i=1 , n;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (i<=n)
    {
        factorial=factorial*i;
        i=i+1;
    }
    
     printf("factorial of %d is %d",n, factorial );
     
    return 0;
}