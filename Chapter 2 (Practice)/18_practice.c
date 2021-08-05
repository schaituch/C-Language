#include <stdio.h> 

int main()
{
    int num;
    printf("Enter the value: \n");
    scanf("%d", &num);
    int div= num/97;
    printf("Divisibility test %d", div);
    return 0;
}