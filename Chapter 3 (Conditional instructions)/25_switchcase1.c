#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks obtained in maths (0-100): \n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("maths grade : O");
        break;
    case 8:
        printf("maths grade : S");
        break;
    case 7:
        printf("maths grade : A");
        break;
    case 6:
        printf("maths grade : B");
        break;
    case 5:
        printf("maths grade : C");
        break;
    case 4:
        printf("maths grade : D");
        break;
    default:
        printf("Your failed!");
        break;
    }

    printf("\nEnter marks obtained in physics (0-100): \n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("physics grade : O");
        break;
    case 8:
        printf("physics grade : S");
        break;
    case 7:
        printf("physics grade : A");
        break;
    case 6:
        printf("physics grade : B");
        break;
    case 5:
        printf("physics grade : C");
        break;
    case 4:
        printf("physics grade : D");
        break;
    default:
        printf("Your failed!");
        break;
    }
    printf("\nEnter marks obtained in chemistry (0-100): \n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("chemistry grade : O");
        break;
    case 8:
        printf("chemistry grade : S");
        break;
    case 7:
        printf("chemistry grade : A");
        break;
    case 6:
        printf("chemistry grade : B");
        break;
    case 5:
        printf("chemistry grade : C");
        break;
    case 4:
        printf("chemistry grade : D");
        break;
    default:
        printf("Your failed!");
        break;
    }

    printf("\nEnter marks obtained in english (0-100): \n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("english grade : O");
        break;
    case 8:
        printf("english grade : S");
        break;
    case 7:
        printf("english grade : A");
        break;
    case 6:
        printf("english grade : B");
        break;
    case 5:
        printf("english grade : C");
        break;
    case 4:
        printf("english grade : D");
        break;
    default:
        printf("Your failed!");
        break;
    }
    printf("\nEnter marks obtained in computer science (0-100): \n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("computer science grade : O");
        break;
    case 8:
        printf("computer science grade : S");
        break;
    case 7:
        printf("computer science grade : A");
        break;
    case 6:
        printf("computer science grade : B");
        break;
    case 5:
        printf("computer science grade : C");
        break;
    case 4:
        printf("computer science grade : D");
        break;
    default:
        printf("Your failed!");
        break;
    }

    printf("\nEnter marks obtained in hindi (0-100): \n");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("hindi grade : O");
        break;
    case 8:
        printf("hindi grade : S");
        break;
    case 7:
        printf("hindi grade : A");
        break;
    case 6:
        printf("hindi grade : B");
        break;
    case 5:
        printf("hindi grade : C");
        break;
    case 4:
        printf("hindi grade : D");
        break;
    default:
        printf("Your failed!");
        break;
    }

    return 0;
}