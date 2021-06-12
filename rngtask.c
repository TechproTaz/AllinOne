#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rngtask()
{
        int lower, upper;

        printf("\nThe random numbers are: ");
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
        rngask();
}
