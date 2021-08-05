//Body mass index

#include <stdio.h>
#include <math.h>

int main()
{
    float cm;
    printf("Enter your height in cm : \n");
    scanf("%f", &cm);
    float m = cm / 100;
    float kg;
    printf("Enter your weight in kg : \n");
    scanf("%f", &kg);
    double bmi = kg / (m * m);
    printf("BMI index is : %lf \n", bmi);

    if (bmi < 18.5)
    {
        printf("Your Under weight");
    }
    else if (bmi = 18.5 && bmi < 24.9)
    {
        printf("Your Normal weight");
    }
    else if (bmi = 25 && bmi < 29.9)
    {
        printf("Your Pre Obesity");
    }
    else if (bmi = 30 && bmi < 34.9)
    {
        printf("Your Obesity class 1");
    }
    else if (bmi = 35 && bmi < 39.9)
    {
        printf("Your Obesity class 2");
    }
    else
    {
        printf("Your Obesity class 3");
    }

    return 0;
}