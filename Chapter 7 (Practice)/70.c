// Write a program containing a function which reverses the array passed to it  

#include <stdio.h> 

void reverse(int *arr, int n)
{
int temp;
for(int i = 1; i < (n/2); i++)
{
    temp = arr[i];
    arr[i]= arr[n-i-1];
    arr[n-i-1] = temp;
}
}

int main()
{
    int arr[] ={1,2,3,4,5,6,7,8,9};
    reverse(arr, 9);
    for(int i = 1; i < 9; i++)
    {
        printf("The value of element %d is : %d \n", i, arr[i]);
    }
    

    return 0;
}
