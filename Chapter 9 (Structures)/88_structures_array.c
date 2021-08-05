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
    struct employee fb[3];

    strcpy(fb[0].name, "Chaitu");
    fb[0].code = 101;
    fb[0].salary= 65000;

    strcpy(fb[1].name, "Hari");
    fb[1].code = 102;
    fb[1].salary= 55000;

    strcpy(fb[2].name, "Varun");
    fb[2].code = 103;
    fb[2].salary= 45000;

    printf("\n       Employee data \n............................ \n");

    for (int i = 0; i < 3; i++)
    {    
    printf("name : %s \n", fb[i].name);
    printf("emp code: %d \n", fb[i].code);
    printf("salary: %0.2f \n \n", fb[i].salary);
    }
    
    return 0;
}