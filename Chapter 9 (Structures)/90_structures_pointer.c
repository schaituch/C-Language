#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    int code;
    float salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    (*ptr).code = 101;
    printf("%d", (*ptr).code);
    printf("\n%d", e1.code);

    return 0;
}