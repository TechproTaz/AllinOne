#include <stdio.h>
#include <stdlib.h>

int aver()
{
    int n, i;
    float num[100], sum = 0.0, avg;

    system("cls");
    printf("----------Average Calculator----------\n\n");
    printf("(Rule ==> you can't do average of more than 100 numbers!)\n\n");
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    cont();
}
