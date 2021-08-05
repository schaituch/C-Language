#include <stdio.h> 

int main()
{
    char st[30];
    printf("Enter your name:");
    scanf("%s", st);     //%s is the format specifier for the string.
    printf("Your name is : %s ", st);
    return 0;
}