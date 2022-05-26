#include <stdio.h>

int main(void)
{
    int i, j, k, story;
    printf("How many-story pyramid would you like to illustrate?:");    scanf("%d", &story);

    for (i=1; i <= story; i++) {
        for (j=1; j <= story - i; j++) {
            putchar(' ');
        }

        for (k=1; k <= 1 + 2 * (i - 1); k++) {
            putchar('*');
        }

        putchar('\n');

    }

    return (0);

}

/* Output: */
/* How many-story pyramid would you like to illustrate?:5 */
/*     * */
/*    *** */
/*   ***** */
/*  ******* */
/* ********* */
