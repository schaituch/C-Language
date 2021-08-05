#include <stdio.h> 

float conversion(float fahrenheit);

int main()
{
    float f;
    printf("Enter the value of fahrenheit temperature : \n");
    scanf("%f ", &f);
    printf("The value of given fahrenheit temperature to celsius temperature is : %f", conversion(f));

    return 0;
}

float conversion(float fahrenheit)
{
    float result=(fahrenheit*5/9)-32;
    return result;
}