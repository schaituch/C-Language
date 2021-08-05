#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Chaitanya";
    char st2[45];
    strcpy(st2, st); // this string library now contains "st" content into "st2" .
    printf("now st2 is %s", st2);
    return 0;
}