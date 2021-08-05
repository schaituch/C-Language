#include <stdio.h> 

int main()
{
    int a=2;
    printf("%d %d %d",  a, ++a, a++);    //to check how the compiler reads the arguments
    return 0;                            //In gcc the arguments are read from (right to left)
}