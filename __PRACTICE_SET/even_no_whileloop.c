#include <stdio.h> 

int main()
{
    int n, x;
    printf("Enter the range : ");
    scanf("%d \n", &n);
    x=2;
    while (x<=n)
    {
        printf("%d \n", x);
        x=x+2;
    }
    
    return 0;
}