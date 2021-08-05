//Print the following star pattern of odd numbers
//*
//***
//*****

#include <stdio.h> 
void printpattern(int n);

int main()
{
    int n=3;
    printpattern(n);
    return 0;
}

void printpattern(int n)
{
    if (n==1)
    {
        printf("* \n");
        return;
    }
    
    //for 1 star = 1-1
    //for 3 star = 2-3          // 2n-1
    //for 5 star = 5-3
printpattern(n-1);
for ( int i = 0; i < (2*n-1)  ; i++)
{
    printf("*");
}
    printf("\n");
}