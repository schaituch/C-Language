//Create a 2D vector using structures
#include <stdio.h>
#include <math.h>
struct vector
{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
};

int main()
{
    struct vector v1, v2, sum;
    v1.x = 3;
    v1.y = 5;
    printf("X dimension is %d and Y dimension is %d", v1.x, v1.y);

    v2.x = 5;
    v2.y = 6;
    printf("\nX dimension is %d and Y dimension is %d", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("\nX dimension of result is %d and Y dimension is %d", sum.x, sum.y);

    return 0;
}