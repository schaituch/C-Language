// Write a C program to display students grades using if else ladder
#include <stdio.h>

int main()
{
    int m1,m2,m3;
    printf("enter the marks of 3 subjects : \n");
    scanf("%d \n %d \n %d", &m1, &m2, &m3);
    float total = m1+m2+m3;
    float avg = total / 3;
    if (m1>= 35 && m2>=35 && m3>=35)
    {
        if (avg > 75)
        {
            printf("Distinction with %0.2f", avg);
        }
        else if (avg > 65)
        {
            printf("First Class with %0.2f", avg);
        }
        else if (avg > 55)
        {
            printf("Second Class with %0.2f", avg);
        }
        else if (avg > 45)
        {
            printf("Third Class with %0.2f", avg);
        }
    }
    else
    {
        printf("Failed");
    }
    

    return 0;
}