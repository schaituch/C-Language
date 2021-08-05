#include <stdio.h> 

int main()
{
    int a;
    printf("Enter your number :");
    scanf("%d", &a);

    (a>10)? printf("'a' less than 10"): printf("'a' not less than 5");
    return 0;
}