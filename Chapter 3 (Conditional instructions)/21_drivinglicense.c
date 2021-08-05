// To check eligibility for driving license
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    if (age >= 18 && age <= 70)
    {
        printf("Your eligible for driving license \n");
        printf("Drive carefully and responsibily :)");
    }
    else
    {
        printf("Your not eligible for driving license \n");
        printf("Driving without license is an offence");
    }
    
    return 0;
}