#include <stdio.h> 

int main()      
{
    int i, factorial=1, n=5;
    for ( i = 1; i <= n; i++)
    {
        factorial *=i;
    }
     printf("the value of factorial %d is %d", n, factorial);

    return 0;
}