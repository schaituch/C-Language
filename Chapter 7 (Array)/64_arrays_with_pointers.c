#include <stdio.h> 

int main()
{
    int marks[4];
    int *ptr;
    ptr= &marks[0];   //pointer points to index 0

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d: \n", i+1);
        scanf("%d", ptr);
        ptr++;   //this points to index 1,2,3....
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks for student %d is %d \n",i+1, marks[i]);
    }
    
    
    return 0;
}