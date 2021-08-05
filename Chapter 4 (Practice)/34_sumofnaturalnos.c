#include <stdio.h> 

int main()
{
    int i , sum=0, n=10;
    for ( i = 1; i <= n; i++)
    {
        sum +=i;
    }
     printf("the sum of first 10 natural numbers is: %d" , sum);
    
    return 0;
}
