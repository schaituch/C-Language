//Write a C program to swap two variables without using 3rd variable.

#include <stdio.h> 

int main()
{
    int a=10, b=20;
    printf("Before swap values of a=%d and b=%d \n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap values of a=%d and b=%d", a, b);
    return 0;
}