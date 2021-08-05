/*Switch Case Control Instructions
Switch case is used when we have to make a choice between number of alternatives 
for a given variable */

#include <stdio.h>

int main()
{
    int rating;
    printf("Enter the rating between  (1-5) \n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("You have given rating: 1 \n");
        break;
    case 2:
        printf("You have given rating: 2 \n");
        break;
    case 3:
        printf("You have given rating: 3 \n");
        break;
    case 4:
        printf("You have given rating: 4 \n");
        break;
    case 5:
        printf("You have given rating: 5 \n");
        break;
    default:
        printf("Invalid rating! \n" );
        break;
    }
    return 0;
}