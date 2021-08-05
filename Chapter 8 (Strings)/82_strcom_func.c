#include <stdio.h> 
#include <string.h>

int main()
{
    char s1[15]="Hello";
    char s2[]="Healo";
     int val = strcmp(s1,s2);   
    printf("%d", val);
    return 0;
}