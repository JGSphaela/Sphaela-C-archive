#include <stdio.h>

int main(void)
{
    int A, B, sum, min, max, x;
    printf("Enter two integer;\n");
    printf("Interger A:");  scanf("%d", &A);
    printf("Interger B:");  scanf("%d", &B);

    if (A > B) {
        max = A;
        min = B;
    }
    else if (A < B) {
        max = B;
        min = A;
    }
    else {
        max = A;
        min = max;
    }

    x = min;
    sum = 0;

    if (x % 2) {
        x += 1;
    }
    else {
    }

    do {
        sum += x;
        x += 2;

    }while (x <= max);

    printf("The sum of even numbers from %d to %d is %d.\n", min, max, sum);

    return (0);
}

/* Output: */
/* Enter two integer; */
/* Interger A:37 */
/* Interger B:28 */
/* The sum of even numbers from 28 to 37 is 160. */
