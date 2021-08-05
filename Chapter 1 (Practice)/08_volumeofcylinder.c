/*This program is to modify the area of given circle 
to volume of cylinder by adding int height to given problem */
#include <stdio.h> 

int main()
{
    float radius=5.56;
    float pi=3.14;
    printf("The area of given circle is %f \n", pi*radius*radius);
    float height=8.67;
    printf("The volume of given cylinder is %f", pi*radius*radius*height);
    return 0;
}