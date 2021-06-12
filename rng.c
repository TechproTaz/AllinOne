#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rng()
{
    int lower, upper;

    system("cls");
    printf(" Enter the lowest number: ");
    scanf("%d", &lower);
    printf(" Enter the highest number: ");
    scanf("%d", &upper);

    printf("\nThe random number is: ");
    int num = (rand() % (upper - lower + 1)) + lower;
    printf("%d ", num);
    rngask();
    cont();
}
