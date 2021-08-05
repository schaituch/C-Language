//For Loop
/*for(intialise;test;increment or decrement)
intialise : setting a loop counter to an intial value
test: checking a condition
increment: updating the loop counter   */

#include <stdio.h> 

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("the value of i is: %d \n",i);
    }
    
    return 0;
}

//BREAK statement is used to exit the loop irrespective of whether the condition is true or false