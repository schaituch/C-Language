#include <stdio.h>

int sum(int a, int b);
int main()
{
    int a = 4, b = 6;
    printf("the value of a and b is %d and %d \n", a, b);
    printf("the sum of a+b is %d \n", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}