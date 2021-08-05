#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum=0, temp, rem;
    printf("Enter a 5 digits number of your choice : \n");
    scanf("%d", &n);
    temp=n;
    while (temp>0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("The sum of 5 digits of a given 5 digit number is %d", sum);
    return 0;
    
}