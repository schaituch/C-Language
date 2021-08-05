#include <stdio.h> 

int main()
{
    float principal,rate,years;
    printf("Enter the amount of principal:");
    scanf("%f",&principal);
    printf("Enter the rate of interest:");
    scanf("%f",&rate);
    printf("Enter the no.of years:");
    scanf("%f", &years);
    float simpleinterest= (principal*rate*years)/100;
    printf("The simple interest for the given values is: %f", simpleinterest);
    return 0;
}