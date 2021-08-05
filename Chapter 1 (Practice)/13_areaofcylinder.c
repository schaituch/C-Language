#include <stdio.h> 

int main()
{
    float radius=4.5, height=10.6;
    float pi=3.14;
    float surfacearea= 2*pi*radius*(radius+height);
    printf("surface area of the given cylinder is %f", surfacearea);
    return 0;
}