#include <stdio.h>

int main(void)
{
    int a, b, c, sum;
    double avg;

    printf("Integer A: ");   scanf("%d", &a);
    printf("Integer B: ");   scanf("%d", &b);
    printf("Integer C: ");   scanf("%d", &c);

    sum = a + b + c;
    avg = (double) sum / 3;

    printf("The sum is %d and the average is %.2f.\n", sum, avg);

    return (0);
}

/* Output: */
/* Integer A: 22 */
/* Integer B: 66 */
/* Integer C: 3 */
/* The sum is 91 and the average is 30.33. */
