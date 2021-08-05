//Create a 2D vector using structures
#include <stdio.h> 

struct vector
{
   int x;
   int y;
};

int main()
{
    struct vector v1,v2;
    v1.x=34;
    v1.y=56;
    printf("X dimension is %d and Y dimension is %d", v1.x,v1.y);

    v2.x=57;
    v2.y=69;
    printf("\nX dimension is %d and Y dimension is %d", v2.x, v2.y);

    return 0;
}   