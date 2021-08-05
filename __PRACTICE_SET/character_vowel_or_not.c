// Write a program to check whether given alphabet is vowel or not
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the alphabt of your choice : ");
    scanf("%c", &ch);

    switch (ch)
    {

    case 'A':
    case 'a':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    printf(" %c is a vowel", ch);
    break;
    
    default:
    printf(" %c is not a vowel", ch);
    break;
    }
    return 0;
}