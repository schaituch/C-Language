#include <stdio.h> 

int main()
{
    FILE *ptr;
    ptr=fopen("sample2.txt", "r");
    //char c=fgetc(ptr);
    //printf("The character is %c \n",c);

    //if u want char by char

    printf("The character is %c \n",fgetc(ptr));
    printf("The character is %c \n",fgetc(ptr));
    printf("The character is %c \n",fgetc(ptr));
    printf("The character is %c \n",fgetc(ptr));
    printf("The character is %c \n",fgetc(ptr));
    return 0;
}