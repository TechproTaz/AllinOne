#include <stdio.h>
#include <string.h>

#define MAXC 100    /* if you need a constant, declare one  */

/* helper function to remove any chars left in input buffer */
void empty_stdin()
{
    int c = getchar();
    while (c != '\n' && c != EOF)
        c = getchar();
}

int wtf (void) {

    system("cls");
    char str1[MAXC+1] = ""; /* initialize to all zero */
    int index, rtn, len;    /* index, return, length  */

    for (;;) {  /* loop until valid input obtained */
        printf ("Enter text of max 100 characters: ");
        rtn = scanf ("%100[^\n]", str1);    /* read at most MAXC char */

        if (rtn != 1) {         /* validate scanf return */
            if (rtn == EOF) {   /* check if EOF, ctrl+d, ctrl+z (windoze) */
                printf ("input canceled.\n");
                return 0;
            }
            if (!str1[0])       /* was a character entered? */
                fprintf (stderr, "error: string is empty.\n");
            /* remove '\n' and any chars that remain in stdin */
            empty_stdin();
        }
        else {  /* all conditions met, good entry, empty stdin and break */
            empty_stdin();
            break;
        }
    }

    len = (int)strlen (str1);   /* get string length */

    for (;;) {  /* now do the same thing for integer */
        printf ("Enter the index to search (0-%d): ", len - 1);
        if ((rtn = scanf ("%d", &index)) != 1) {
            if (rtn == EOF) {
                printf ("input canceled.\n");
                return 0;
            }
            fprintf (stderr, "error: invalid input - not integer.\n");
            /* only need to strip if non-integer entered, because %d
             * will skip leading whitespace, including '\n'.
             */
            empty_stdin();
        }
        else if (index < 0 || len < index + 1)  /* validate index value */
            fprintf (stderr, "error: invalid index - out of range.\n");
        else
            break;
    }

    printf ("your char is: %c\n", str1[index]);

    main();
}
