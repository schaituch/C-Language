#include <stdio.h>
#include <string.h>

typedef struct employee   //typedef keyword creates alias name for data types in C
{
    char name[20];
    int code;
    float salary;
}emp;      //emp is the other name given to struct employee

int main()
{
    //Declaring e1 and ptr
    emp e1;    //instead of (struct employee) we can write (emp) because we used typedef keyword
    emp *ptr;

    //pointing ptr to e1
    ptr = &e1;

    //set the member values for e1
    (*ptr).code = 101;
    printf("%d", (*ptr).code);
    printf("\n%d", e1.code);

    return 0;
}