#include <stdio.h>
//Sum is a function which takes a and b as input and returns an integer as output
int sum(int a, int b); // ----> Function prototype
int main()
{
    int result;
    result = sum(9, 1); //----> Function call
    printf("The result is %d \n", result);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b; //----> Function definition
    return result;
}