#include <stdio.h> 

int main()
{
    FILE *ptr;
    ptr=fopen("generated.txt", "w");
    int num=98;
    fprintf(ptr, "The given number is %d \n", num);
    fclose(ptr);
    return 0;
}