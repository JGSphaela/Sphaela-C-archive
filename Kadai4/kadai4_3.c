#include <stdio.h>

int main(void)
{
    int n, m, k, i, j;
    double p;

    printf("How many balls are there in a bag?:");
    scanf("%d", &n);

    while (n <= 0 || n >= 12) {
        printf("Input value of n is inappropriate. n >= 12 or n <= 0.\n");
        printf("Enter the total number of balls in a bag again:");
        scanf("%d", &n);

    }

    printf("How many red balls in a bag?:");
    scanf("%d", &m);

    while (m > n || m < 0) {
        printf("Input value of n is inappropriate. m > n or m < 0.\n");
        printf("Enter the number of balls again:");
        scanf("%d", &m);

    }

    printf("How many balls will you take out of the bag?:");
    scanf("%d", &k);

    while (k > n || k < 0) {
        printf("Input value of n is inappropriate. k > n or k < 0.\n");
        printf("Enter the number of balls you will take out again:");
        scanf("%d", &k);

    }

    p = 1;
    for (i = n, j = k; j != 0; i--, j--) {
        p *= (double) (i - m) / i;

    }
    printf("The probability that all the balls you take are white is %f.\n", p);

    return (0);
}

/* Output: */
/* How many balls are there in a bag?:12 */
/* Input value of n is inappropriate. n >= 12 or n <= 0. */
/* Enter the total number of balls in a bag again:10 */
/* How many red balls in a bag?:13 */
/* Input value of n is inappropriate. m > n or m < 0. */
/* Enter the number of balls again:6 */
/* How many balls will you take out of the bag?:14 */
/* Input value of n is inappropriate. k > n or k < 0. */
/* Enter the number of balls you will take out again:2 */
/* The probability that all the balls you take are white is 0.133333. */
