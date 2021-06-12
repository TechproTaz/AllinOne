#include <stdio.h>
#include <stdlib.h>

int asku()
{
    char bbb;
				printf("\n Do you want to quit? (y/n)\n");
			printf(" ==>");
			scanf("%s", &bbb);
			getchar();


			if ((bbb == 'N') || (bbb == 'n'))
			{
			    system("cls");
				main();
			}
			else if ((bbb == 'y') || (bbb == 'Y'))
			{
				system("cls");
				printf("\n Thank you soo much for using my software!");
				printf("\n         Press any key to quit.");
				getchar();
				{exit(0);}
            }
			else
			{
				printf("\n You have entered a invalid option");
			}

}
