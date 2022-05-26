#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter an integer x:");    scanf("%d", &x);
    printf("x = %d\n", x);

    if (x % 5)
        puts("x is not a multiple of 5.\n");
    else if (x % 7)
        puts("x is a multiple of 5, but it's not a multiple of 7.\n");
    else
        puts("x is both a multiple of 5 and 7.\n");

    return(0);
}
