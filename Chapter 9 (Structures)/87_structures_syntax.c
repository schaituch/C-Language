#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{

    struct employee e1;
    e1.code = 16500;
    e1.salary = 30509.58;
    //e1.name= "Chaitu"; //-------> this wont work.
    strcpy(e1.name, "Chaitanya");

    printf("Employee data \n");
    printf("name : %s \n", e1.name);
    printf("emp code: %d \n", e1.code);
    printf("salary: %0.2f \n", e1.salary);

    return 0;
}