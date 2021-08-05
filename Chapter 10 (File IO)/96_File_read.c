#include <stdio.h> 

int main()
{
    FILE *ptr;
    int num1, num2, num3 ;
    ptr=fopen("sample.txt", "r");
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fscanf(ptr, "%d", &num3);
    printf("The value is %d \n",num1);
    printf("The value is %d \n",num2);
    printf("The value is %d \n",num3);
    fclose(ptr);
    return 0;
}