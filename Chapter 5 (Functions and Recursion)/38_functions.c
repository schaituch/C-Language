/*Function : It is a way to break tour code into chunks so that it is possible
for a programmer to reuse them */
//Function : It is a block of code which performs a particular task

#include <stdio.h>
void display();                    //Function Prototype

int main()
{
    int a;
    printf("Initializing Display \n");
    display();                     //Funtion Call
    printf("Finished Display \n");
    return 0;
}
void display()
{
    printf("THIS IS DISPLAY \n"); //Function definition
}
