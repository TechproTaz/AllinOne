#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rngask()
{
    char ggg;

    printf("\n\nDo you want another number?(y/n)\n");
    printf("==>");
    scanf("%s", &ggg);

    if ((ggg == 'y') || (ggg == 'Y'))
        rng();
    else if ((ggg == 'n') || (ggg == 'N'))
        main();
    else
        printf("\n You have entered a invalid option\n");
        getchar();
}
