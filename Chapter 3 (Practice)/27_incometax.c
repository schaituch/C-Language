#include <stdio.h>

int main()
{
    float tax = 0;
    float income;
    printf("Enter your income : \n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.05 * (income - 500000);
    }
    if (income <= 1000000)
    {
        tax = tax + 0.05 * (income - 1000000);
    }
    printf("Your net income tax to be paid : %f", tax);
    return 0;
}