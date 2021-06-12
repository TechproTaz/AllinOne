#include <stdio.h>
#include <stdlib.h>

int area()
{
        char aaa;
        int square_side, area;
        float radius, area_circle;
        int length, breadth;
        double a, b, c, s, areaa;
        float base, altitude;
        float areae;

            system("cls");
            printf("----------Area Calculator----------\n");
			printf("\n");
			printf(" a. Cube \n");           //borgo
			printf(" b. Circle \n");         //britto
			printf(" c. Rectangle \n");      //ayoto
			printf(" d. Triangle\n");        //trivuj
			printf(" e. Parallelogram\n");   //samantorik
			printf(" q. Quit.\n");
			printf(" x. Go to main menu\n");
			printf(" Enter your choice (a/b/c/q/x): ");
			scanf("%s", &aaa);

			if ((aaa == 'a') || (aaa == 'A'))
            {
               int square_side, area;

               system("cls");
               printf("Enter the side of square: ");
               scanf("%d", &square_side);
               //calculation of the area
               area = square_side * square_side;

               printf("Area of the square: %d", area);
            }

            else if ((aaa == 'b') || (aaa == 'B'))
            {
               system("cls");
               // take radius as input
               printf("Enter the radius of circle: ");
               scanf("%f", &radius);
               //Do the Maths!!
               area_circle = 3.14 * radius * radius;
               //Print out le answer
               printf("Area of circle : %f", area_circle);
            }

            else if ((aaa == 'c') || (aaa == 'C'))
            {
                system("cls");
               printf("\nEnter the Length of Rectangle: ");
               scanf("%d", &length);

               printf("\nEnter the Breadth of Rectangle: ");
               scanf("%d", &breadth);

               area = length * breadth;
               printf("\nArea of Rectangle : %d", area);
            }

            else if ((aaa == 'd') || (aaa == 'D'))
            {
                system("cls");
              printf("Enter sides of a triangle(ex:12 13 5): ");
              scanf("%lf%lf%lf", &a, &b, &c);

              s = (a+b+c)/2; // Semiperimeter

              areaa = sqrt(s*(s-a)*(s-b)*(s-c));

              printf("Area of the triangle = %.2lf\n", areaa);
            }

            else if ((aaa == 'e') || (aaa == 'E'))
            {
                system("cls");
                printf("Enter base of the given Parallelogram:  ");
                scanf("%f", &base);
                printf("Enter altitude of the given Parallelogram:  ");
                scanf("%f", &altitude);
                areae = base * altitude;
                printf("Area of Parallelogram is: %.3f\n", areae);
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
