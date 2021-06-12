#include <stdio.h>
#include <stdlib.h>

int cont()
{
    char bbb;

            printf("\n Do you want to continue? (y/n)\n");
			printf(" ==>");
			scanf("%s", &bbb);
			getchar();


			    if ((bbb == 'Y') || (bbb == 'y'))
			{
			    system("cls");
				main();
			}
			else if ((bbb == 'n') || (bbb == 'N'))
			{
				printf("\n Thank you soo much for using my software!");
				printf("\n         Press any key to quit.");
				getchar();
			}
			else
			{
				printf("\n You have entered a invalid option");
			}
}
