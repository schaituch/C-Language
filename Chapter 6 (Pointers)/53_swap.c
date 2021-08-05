#include <stdio.h> 

void wrong_swap(int a, int b);
void swap(int *a, int*b);

int main()
{
    int x,y;
    printf("The enter value of x  :\n");
    scanf("%d", &x);
    printf("The enter value of y  :\n");
    scanf("%d", &y);
    printf("The value of x and y before swap is %d and %d \n", x,y);
    //wrong_swap( x, y); //will not work due to call by value 
    swap(&x, &y);
    printf("The value of x and y after swap is %d and %d \n", x,y);
    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}