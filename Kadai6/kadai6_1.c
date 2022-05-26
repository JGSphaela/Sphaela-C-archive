#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int qua(int x)
{
    return sqr(sqr(x));
}

int main(void)
{
    int x;
    printf("Please enter a integer:");  scanf("%d", &x);
    printf("%d to the power of 4 is %d.\n", x, qua(x));

    return 0;
}

/* Output: */
/* Please enter a integer:16 */
/* 16 to the power of 4 is 65536. */
