#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int dice()
{
    char ggg;
    int lower = 1, upper = 6;

    system("cls");
    printf(" Press enter to roll your dice!\n");
    getchar();
    getchar();

        srand(time(0));
        printf("\n The roll out of your dice is: ");
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d", num);
        printf("!");

        printf("\n\nDo you want to roll another dice?(y/n)\n");
        printf("==>");
        scanf("%s", &ggg);
        if ((ggg == 'y') || (ggg == 'Y'))
            dice();
        else if ((ggg == 'n') || (ggg == 'N'))
            main();
        else
            printf("\n You have entered a invalid option\n");
            getchar();


    cont();
}
