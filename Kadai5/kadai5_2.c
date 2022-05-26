#include <stdio.h>

int main(void)
{
    int n, i, j, s = 0, a = 0, b = 0, c = 0, d = 0, e = 0;

    printf("Enter a total number of students:");
    scanf("%d", &n);

    while (n >= 20) {
        printf("The input number should be smaller than 20.\nEnter a total number of students again:"); 
        scanf("%d", &n);

    }


#define SNUM n

    int sc[n];

    for (i = 0; i < n; i++) {
        printf("ID #%d:", i+1);   scanf("%d", &j);

        while (j < 0 || j > 100) {
            printf("Input error: score must be between 0 and 100!\n");
            printf("Enter ID #%d again:", i+1);   scanf("%d", &j);

        }
        sc[i] = j;

    }

    for (i = 0; i < n; i++) {
        if (sc[i] == 100) {
            s++;
        }

        else if (sc[i] <= 99 && sc[i] >= 90) {
            a++;
        }

        else if (sc[i] <= 89 && sc[i] >= 80) {
            b++;
        }

        else if (sc[i] <= 79 && sc[i] >= 70) {
            c++;
        }

        else if (sc[i] <= 69 && sc[i] >= 60) {
            d++;
        }

        else {
            e++;
        }

    }

    printf("*** Distribution of scores ***\n");
    printf("100:%d\n90-99:%d\n80-89:%d\n70-79:%d\n60-69:%d\n0-59:%d\n", s, a, b, c, d, e);

    for (i = 0; i < 30; i++) {
        putchar('*');

    }
    putchar('\n');

    return(0);
}

/* Output: */
/* Enter a total number of students:50 */
/* The input number should be smaller than 20. */
/* Enter a total number of students again:15 */
/* ID #1:87 */
/* ID #2:100 */
/* ID #3:90 */
/* ID #4:07 */
/* ID #5:97 */
/* ID #6:96 */
/* ID #7:80 */
/* ID #8:80 */
/* ID #9:80 */
/* ID #10:70 */
/* ID #11:70 */
/* ID #12:70 */
/* ID #13:60 */
/* ID #14:60 */
/* ID #15:60 */
/* *** Distribution of scores *** */
/* 100:1 */
/* 90-99:3 */
/* 80-89:4 */
/* 70-79:3 */
/* 60-69:3 */
/* 0-59:1 */
/* ****************************** */
