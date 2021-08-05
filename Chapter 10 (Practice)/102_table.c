#include <stdio.h> 

int main()
{
    FILE *ptr;
    int num;
    printf("Enter the number for which you require multiplication table : \n");
    scanf("%d", &num);
    ptr=fopen("table.txt", "w");
    for (int i = 0; i <=11 ; i++)
    {
        fprintf(ptr,"%d x %d = %d \n", num, (i+1), num*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated the table of %d to table.txt file", num);
    return 0;
}