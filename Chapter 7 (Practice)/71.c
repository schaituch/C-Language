#include <stdio.h>

void printTable(int *mulTable, int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }
    printf("The multiplication table of %d is :\n", num);

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d \n", num, i + 1, mulTable[i]);
    }
    printf(" \n******************************************** \n \n");
}
int main()
{
    int mulTable[3][12];
    printTable(mulTable[0], 9, 12);
    printTable(mulTable[1], 8, 12);
    printTable(mulTable[2], 7, 12);

    return 0;
}