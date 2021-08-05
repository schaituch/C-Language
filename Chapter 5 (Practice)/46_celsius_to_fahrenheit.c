#include <stdio.h> 

float conversion(float celsius);
int main()
{
    float c;
    printf("Enter the value of temperature in celsius : \n");
    scanf("%f", &c);
    printf("The value of this celsius temperature to fahrenheit is: %f", conversion(c) );
    return 0;
}

float conversion(float celsius)
{
    float result= (celsius*9/5)+32;
    return result;
}