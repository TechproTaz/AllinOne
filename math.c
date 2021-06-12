#include <stdio.h>
#include <stdlib.h>

//make the software using many files!!

int math()
{
    int n, c, value, first, second, add, subtract, multiply, sum = 0;
    char aaa;
    float divide;

			system("cls");
			printf("----------Simple Math----------\n");
			printf("\n");
			printf(" a. Addition/Summation \n");
			printf(" b. Subtraction \n");
			printf(" c. Multiplication \n");
			printf(" d. Division\n");
			printf(" q. Quit.\n");
			printf(" x. Go to main menu\n");
			printf(" Enter your choice (a/b/c/d/q/x): ");
			scanf("%s", &aaa);

			if ((aaa == 'a') || (aaa == 'A'))
			{
				system("cls");
				printf("How many numbers you want to add?\n");
				scanf("%d", &n);

				for (c = 0; c < n; c++)
				{
					printf("Enter number-%d: ", c + 1);
					scanf("%d", &value);
					sum = sum + value;
				}

				printf("Sum of the integers = %d\n", sum);
			}
			else if ((aaa == 'b') || (aaa == 'B'))
			{
				system("cls");
				printf("Please enter the 1st number: ");
				scanf("%d", &first);
				printf("Please enter the 2nd number: ");
				scanf("%d", &second);
				subtract = first - second;

				printf("Difference = %d\n", subtract);
			}
			else if ((aaa == 'c') || (aaa == 'C'))
			{
				system("cls");
				printf("Please enter the 1st number: ");
				scanf("%f", &first);
				printf("Please enter the 2nd number: ");
				scanf("%f", &second);

				multiply = first * second;
				printf("Multiplication = %d\n", multiply);
			}
			else if ((aaa == 'd') || (aaa == 'D'))
			{
				system("cls");
				printf("Please enter the 1st number: ");
				scanf("%f", &first);
				printf("Please enter the 2nd number: ");
				scanf("%f", &second);

				divide = first / (float) second;
				printf("Division = %.2f\n", divide);
			}

			else if ((aaa == 'x') || (aaa == 'X'))
            {
                system("cls");
                main();
            }

            else if ((aaa == 'q') || (aaa == 'q'))
            {
                asku();
            }

			else
			{
				system("cls");
				printf("\n You have entered a invalid option\n");
				getchar();
			}

			cont();
}
