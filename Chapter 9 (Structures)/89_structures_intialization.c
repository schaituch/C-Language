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
    struct employee amazon={"Chaitu",100, 60000};

    printf("name is : %s \n", amazon.name);
    printf("code is : %d \n", amazon.code);
    printf("salary is : %0.2f", amazon.salary);
    return 0;
}