#include <stdio.h> 
#include <string.h>

int main()
{
    char s1[15]="Chaitanya ";
    char s2[]="Chebrolu";
    strcat(s1,s2);    //This function concatenate two strings.
    printf("%s", s1, s2);
    return 0;
}