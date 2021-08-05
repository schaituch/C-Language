#include <stdio.h>

int main()
{
    float principal = 125000, rate = 4.65, years = 5;
    float simpleinterest = (principal * rate * years) / 100;
    printf("The simple interest of given inputs is %f", simpleinterest);
    return 0;
}