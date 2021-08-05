#include <stdio.h> 

float force(float mass);   //Function Prototype

int main()
{
    float m;
    printf("Enter the value of mass in kgs : %f \n");
    scanf("%f", &m);
    printf("The value of force in newton is : %f \n", force(m));       //Function call
    return 0;
}

float force(float mass)
{
float result= mass*9.8;           //Function definition
return result;
}