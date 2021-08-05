#include <stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    GoodMorning();

    return 0;
}

void GoodMorning()
{
    printf("Good Morning Chaitu \n");
    GoodAfternoon();
}

void GoodAfternoon()
{
    printf("Good Afternoon Chaitu \n");
    GoodNight();
}

void GoodNight()
{
    printf("Good Night Chaitu \n");
}