/* Write a program to print the value of variable i  
    by using "pointer to pointer" type of variable */

    #include <stdio.h> 
    
    int main()
    {
        int i= 656;
        int *ptr;
        int **ptr_ptr;

        ptr = &i;
        ptr_ptr = &ptr;

        printf("The value of i is %d \n", **ptr_ptr);

        return 0;
    }