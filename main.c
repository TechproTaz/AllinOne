#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>


//make the software using many files!!

int main()
{
	int num1=0;

        time_t current_time = 0;

        system("cls");
        sleep(1);
        printf("The All in One!");
        printf(" What do you want to do?\n\n");
        sleep(1);
        printf(" 1. Simple Math.\n");
        sleep(1);
        printf(" 2. Temp converter.\n");
        sleep(1);
        printf(" 3. Area calculator.\n");
        sleep(1);
        printf(" 4. Average.\n");
        sleep(1);
        printf(" 5. Odd or Even.\n");
        sleep(1);
        printf(" 6. \n\n");
        sleep(1);
        printf(" ----------Useless stuff----------\n\n");
        sleep(1);
        printf(" 7. Score to grade converter.(Does not work)\n");
        sleep(1);
        printf(" 8. Random number generator.(Does not work)\n");
        sleep(1);
        printf(" 9. Dice\n");
        sleep(1);
        printf(" 10. Traffic light(Does not work)\n");
        sleep(1);
        printf(" 11. About the creator(Does not work)\n");
        sleep(1);
        printf(" e. exit\n\n");
        sleep(1);
        printf(" ==>");

        scanf("%d", &num1);

        if (num1 == 1)
         {
             math();
         }
        else if (num1 == 2)
        {
            temp();
            printf(" num %d", &num1);
        }
        else if (num1 == 3)
            area();
        else if (num1 == 4)
            aver();
        else if (num1 == 5)
            ooe();
        else if (num1 == 6)
        {
            printf("sorry this function still is not set.");
            wtf();
        }
            /*
        else if (num1 == 7)
            stg();
            */
        else if (num1 == 8)
            rng();
        else if (num1 == 9)
            dice();
            /*
        else if (num1 == 10)
            tl();
        else if (num1 == 11)
            me();
        */
        else
        {
            system("cls");
            printf("\n You have entered a invalid option\n");
            getchar();

        }
}
