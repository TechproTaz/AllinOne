#include <stdio.h>
#include <stdlib.h>

int ooe()
{
    int num;
    char ggg;

    system("cls");
    printf(" Enter your number: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

        printf("\n\nDo you want to try  with another number?(y/n)\n");
        printf("==>");
        scanf("%s", &ggg);
        if ((ggg == 'y') || (ggg == 'Y'))
            ooe();
        else if ((ggg == 'n') || (ggg == 'N'))
            main();
        else
            printf("\n You have entered a invalid option\n");
            printf(" Press enter to continue\n");
            getchar();
    cont();
}
