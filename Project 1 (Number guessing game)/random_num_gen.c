#include <stdio.h>
#include <stdlib.h> //this header files generates random number
#include <time.h>

int main()
{
    int number;
    srand(time(0));   /*this helps in giving random number each time, otherwise same number reappears 
                         for every time we execute this program  */
    number = rand() % 100; //generates a random number between 1 and 100
    printf("The number is %d", number);
    return 0;
}