#include <stdio.h> 

int main()
{
    char st[30];
    printf("Enter your name:");
    gets(st);    //this is used to receive a multiword string.
    puts(st);    //this is used to print the string in next line.
    return 0;
}