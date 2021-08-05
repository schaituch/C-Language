#include <stdio.h> 
#include <stdlib.h>
int main()
{
    int *ptr;
    //printf("the size of integer in my pc is %d \n", sizeof(int));
    ptr=malloc(6* sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element : \n", i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %d \n",i , ptr[i]);
    }
    
    ptr=realloc(ptr, 10*sizeof(int));
     for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element : \n", i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %d \n",i , ptr[i]);
    }
    return 0;
}