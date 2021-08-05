//Loops are used to repeat the similar part of code snippet efficiently 
//While Loop - Checks the condition and then executes the code .

#include <stdio.h>

int main()
{
    int a;
    printf("enter value of a \n");
    scanf("%d", &a);

    while (a <= 10)   //(if condition is true)
    {
        printf("%d\n", a);          //This keeps executing as long as the condition is true.
        a++;
    }
    return 0;
}
