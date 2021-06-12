#include <stdio.h>
#include <stdlib.h>

int temp()
{
    char gamuen;
    float divide, celsius, fahrenheit, kelvin, Area, Length, Width, s, K, F;
    float convertFahKelvin(float F );
        system("cls");
		printf(" ------The Temperature Converter------\n");
		printf(" Info: Temp scale => C = celcius, F = farenheit and K = Kelvin\n");
		printf(" a. Fahrenheit => Celsius\n");
		printf(" b. Celsius => Fahrenheit\n");
		printf(" c. Fahrenheit => Kelvin\n");
		printf(" d. Celsius => Kelvin\n");
		printf(" e. Kelvin ==> Celsius\n");
		printf(" f. Kelvin ==> Fahrenheit\n");
		printf(" q. Quit.\n");
		printf(" x. Go to main menu\n");
		printf(" ==> ");
		scanf("%s", &gamuen);

			if ((gamuen == 'a') || (gamuen == 'A'))
			{
				system("cls");
				printf(" Please enter the temperature: ");
			scanf("%f", &fahrenheit);
			celsius = (5.0 / 9) *(fahrenheit - 32);
			printf("%.2f°F = %.2f°C", fahrenheit, celsius);
			cont();
			}

			else if ((gamuen == 'b') || (gamuen == 'B'))
			{
				system("cls");
				printf(" Please enter the temperature: ");
			scanf("%f", &celsius);
			fahrenheit = (celsius *9 / 5) + 32;
			printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
            cont();
			}

			//Fahrenheit => Kelvin
			else if ((gamuen == 'c') || (gamuen == 'C'))
			{
				system("cls");
				printf(" Please enter the temperature: ");
                scanf("%f", &F);
                K = 273.5 + ((F - 32.0) * (5.0/9.0));
                printf("%.2f Fahrenheit = %.2f Kelvin",F,K);
                cont();
			}

			//Celsius => Kelvin
			else if ((gamuen == 'd') || (gamuen == 'D'))
			{
				system("cls");
				printf(" Please enter the temperature: ");
                cont();
			}

			//Kelvin ==> Celsius
			else if ((gamuen == 'e') || (gamuen == 'E'))
			{
				system("cls");
				printf(" Please enter the temperature: ");
                cont();
			}

			//Kelvin ==> Fahrenheit
			else if ((gamuen == 'f') || (gamuen == 'F'))
			{
				system("cls");
				printf(" Please enter the temperature: ");
                cont();
			}

			else if ((gamuen == 'x') || (gamuen == 'X'))
            {
                system("cls");
                main();
            }

            else if ((gamuen == 'q') || (gamuen == 'q'))
            {
                asku();
            }

			else
			{
				system("cls");
				printf("\n You have entered a invalid option\n");
				getchar();
			}
	}
