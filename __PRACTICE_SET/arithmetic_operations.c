//Write a C program to perform arithmetic operation based on user choice.
#include <stdio.h>

int main()
{
    int a,b,ch;
    printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Modulo division\n");
    scanf("\n %d", &ch);
    printf("\n enter any 2 numbers \n");
    scanf(" %d \n %d", &a,&b);
    switch (ch)
    {
    case 1:printf("Addition= %d", a+b);
        break;
    case 2:printf("Subtraction= %d", a-b);
        break;
    case 3:printf("Multiplication= %d", a*b);
        break;
    case 4:printf("Division= %d", a/b);
        break;
    case 5:printf("Modulo division= %d", a%b);
        break;
    default: printf("Invalid Input, Please try again");
        break;
    }
    return 0;
}