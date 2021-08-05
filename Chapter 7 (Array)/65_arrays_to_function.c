// Passing arrays to function.
#include <stdio.h> 
void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n", i+1, *(ptr+i));
    }
    
}

int main()
{
    int arr[]= {69,87,89,58,47,63};
    printArray(arr, 6);
    return 0;
}