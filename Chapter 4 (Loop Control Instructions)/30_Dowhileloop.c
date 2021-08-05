//Do While- Executes the code and then checks the condition
#include <stdio.h> 

int main()
{
    int a=0;
    do
    {
        printf("the value of a is: %d \n", a);    //First executes once
        a++;
    } while (a<=10);          // checks if the condition is true and creates or loop , if false terminates
    
    return 0;
}
