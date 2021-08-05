#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr=fopen("sample.txt", "r");
    if (ptr==NULL)
    {
        printf("This file does not exist, retry. \n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        printf("The value of given num is %d", num);
    }
    fclose(ptr);
    return 0;
}