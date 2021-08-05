//This program is to convert celsius temperature to fahrenheit temperature value
#include <stdio.h>

int main()
{
    float celsius, far;
    printf("The value of celsius temperature is: ");
    scanf("%f", &celsius);
    far = (celsius * 9 / 5) + 32;
    printf("The value of celsius temperature to fahrenheit is %f", far);
    return 0;
}
