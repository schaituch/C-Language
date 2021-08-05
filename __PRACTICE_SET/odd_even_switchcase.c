#include <stdio.h> 

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    switch (n%2)
    {
    case 0: printf("number is even", n);
    break;
    
    case 1: printf("number is odd", n);
    break;
    }
    return 0;
}