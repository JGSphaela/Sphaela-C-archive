#include <stdio.h>

int main(void)
{
    int valuex, valuey;
    double result;
    printf("enter the value of x: ");   scanf("%d", &valuex);
    printf("enter the value of y: ");   scanf("%d", &valuey);
    result = (double) valuex / valuey;
    printf("The result is %.1f.\n", result);

    return 0;
}

