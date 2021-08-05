/* Write a program having a variable i . 
   Print the address of i.
   Pass this variable to a function and print its address.
   See whether both addresses going to be same or not */

#include <stdio.h> 

int main()
{
    int i=95;
    printf("the value of i is %d \n", i);
    printadd(i);
    printf("the address of i is %u \n", &i);
    return 0;
}

void printadd( int a)
{
    printf("the address of a is %u \n", &a);
    return i;
}

/* here the both address are different as we made a copy of variable value only using function */