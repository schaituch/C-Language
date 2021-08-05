#include <stdio.h>

int main()
{
    int maths, physics, chemistry;
    float total;
    printf("Enter your maths marks: \n");
    scanf("%d", &maths);
    if (maths > 100)
    {
        printf("invalid input, re-enter!");
    }
    printf("\nEnter your physics marks: \n");
    scanf("%d", &physics);
    if (physics > 100)
    {
        printf("invalid input, re-enter!");
    }
    printf("\nEnter your chemistry marks: \n");
    scanf("%d", &chemistry);
    if (chemistry > 100)
    {
        printf("invalid input, re-enter!");
    }
    total = (maths + physics + chemistry) / 3;

    if (total < 40 || maths < 33 || physics < 33 || chemistry < 33)
    {
        printf("Your Failed and total percentage :! %f", total);
    }
    else if (total >= 60 && total < 70)
    {
        printf("Your Passed with total percentage : %f", total);
    }
    else if (total >= 70 && total < 90)
    {
        printf("Your Passed with total percentage : %f", total);
    }
    else if (total >= 90 && total <= 100)
    {
        printf("Your Passed with total percentage : %f", total);
    }
    else if (total > 100)
    {
        printf("Invalid input");
    }
    return 0;
}