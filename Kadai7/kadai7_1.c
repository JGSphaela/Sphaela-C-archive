#include <stdio.h>

int main(void)
{
    int a = 21121059, l, r, mul, div;
    l = a << 3;
    r = a >> 3;
    mul = a * 8;
    div = a / 8;
    
    printf("Input value:%d\n", a);
    printf("%d multiply by 8 is %d\n", a, mul);
    printf("%d divide by 8 is %d\n", a, div);
    printf("%d shift to left by 3 bits is %d\n", a, l);
    printf("%d shift to right by 3 bits is %d\n", a, r);

    if (l == mul) {
        printf("shift to left by 3 bits is equal to multiply by 8(2^3)!\n");
    }

    else {
        printf("shift to left by 3 bits is not equal to multiply by 8(2^3)!\n");
    }

    if (r == div) {
        printf("shift to right by 3 bits is equal to divide by 8(2^3)!\n");
    }

    else {
        printf("shift to right by 3 bits is not equal to divide by 8(2^3)!\n");
    }
    
    return(0);
}

/* Output: */
/* Input value:21121059 */
/* 21121059 multiply by 8 is 168968472 */
/* 21121059 divide by 8 is 2640132 */
/* 21121059 shift to left by 3 bits is 168968472 */
/* 21121059 shift to right by 3 bits is 2640132 */
/* shift to left by 3 bits is equal to multiply by 8(2^3)! */
/* shift to right by 3 bits is equal to divide by 8(2^3)! */
