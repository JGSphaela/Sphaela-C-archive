#include <stdio.h>

void plus(int x)
{
    for (int i = 0; i < x; i++) {
    putchar('+');
    }
}

void space(int x)
{
    for (int i = 0; i < x; i++) {
    putchar(' ');
    }
}

int main(void)
{
    int w, h, i, j;
    
    printf("Width:");   scanf("%d", &w);
    printf("Height:");   scanf("%d", &h);

    for (i = 0; i < h; i++) {
        space(h-i-1);
        plus(w);
        putchar('\n');
    
    }

    return 0;
}

/* Output: */
/* Width:5 */
/* Height:3 */
/*   +++++ */
/*  +++++ */
/* +++++ */
