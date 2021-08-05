#include <stdio.h>

void update(int *a,int *b) {

    *a=*a + *b;
    *b=abs(*a -2*(*b));
    // complete this function    
}


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("The value of a: \n");
    scanf("%d",&a);
    printf("The value of b: \n");
    scanf("%d", &b);
    update(pa, pb);
    printf("sum:%d\ndiff:%d", a, b);

    return 0;
}

