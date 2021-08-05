#include <stdio.h> 

int main()
{
    float radius, height;
    float pi=3.14;
    printf("Enter the value of radius:");
    scanf("%f",&radius);
    printf("Enter the value of height:");
    scanf("%f", &height);
    float surfacearea = 2*pi*radius*(radius+height);
    printf("The area of the cylinder given: %f", surfacearea);
    return 0;
}