#include <stdio.h>

int main(void)
{
    int va[5], i, vb[5];

    printf("Enter the integers of an array:\n");

    for (i = 0; i < 5; i++) {
        printf("va[%d]:", i);   scanf("%d", &va[i]);
    
    }

    for (i = 0; i < 5; i++) {
        vb[4 - i] = va[i];
    
    }

    printf("-------\n");

    for (i = 0; i < 5; i++) {
        printf("%d %d\n", va[i], vb[i]);

    }

    return(0);
}

/* Output: */
/* Enter the integers of an array: */
/* va[0]:5 */
/* va[1]:4 */
/* va[2]:3 */
/* va[3]:2 */
/* va[4]:1 */
/* ------- */
/* 5 1 */
/* 4 2 */
/* 3 3 */
/* 2 4 */
/* 1 5 */
