#include <stdio.h>

/* Count the bits of x */
int count_bits(unsigned x)
{
    int bits = 0;
    while (x) {
        if (x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}

/* Using count_bits to get the bits size of unsigned */
int int_bits()
{
    return count_bits(~0U);
}

/* Print out x in binary */
void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
    putchar('\n');
}

/* rotate n bit from right to left */
unsigned rrotate(unsigned x, unsigned char n)
{
    unsigned y = 0U, res, rx;
    /* y is a unsigned 0 to be alternate later for temporary storage */
    /* rx is for x shift to right by n */
    /* res is for result */

    for (char i = n - 1, j = int_bits() - 1; i >= 0; i--, j--) {
        /* i for x manipulation, j for y */
        /* x search from n to the right, y search from left-most to right(stops when x stops) */ 
        char bol = ((x >> i & 1U) ? 1 : 0);
        /* bol check if bits n of x is 1 or 0 */
        /* printf("bol=%u\n", bol); /1* debug bol output *1/ */
        switch (bol) {
            case 0 :
                break;
                /*case bit(n) = 0, y is 0 by default so nothing to do */
            case 1 :
                y ^= 1 << j;    break; 
                /* case bit(n) = 1, flip bit(n) of y so it becomes 1 */

        }

    }
    rx = x >> n;    /* shift x to right by n bits */
    res = y | rx;   /* combining y and rx to get the result */

    return res;
}

/* rotate n bit from left to right */
unsigned lrotate(unsigned x, unsigned char n)
{
    unsigned y = 0U, res, lx;
    /* y is a unsigned 0 to be alternate later for temporary storage */
    /* rx is for x shift to left by n */
    /* res is for result */

    for (char i = int_bits() - 1, j = n - 1; j >= 0; i--, j--) {
        /* i for x manipulation, j for y */
        /* x search from left-most to right(stops when y stops), y search from n to the right */ 
        char bol = ((x >> i & 1U) ? 1 : 0);
        /* bol check if bits n of x is 1 or 0 */
        /* printf("bol=%u\n", bol); /1* debug bol output *1/ */
        switch (bol) {
            case 0 :
                break;
                /*case bit(n) = 0, y is 0 by default so nothing to do */
            case 1 :
                y ^= 1 << j;    break; 
                /* case bit(n) = 1, flip bit(n) of y so it becomes 1 */

        }

    }
    lx = x << n;    /* shift x to left by n bits */
    res = y | lx;   /* combining y and rx to get the result */

    return res;
}

int main(void)
{
    unsigned x, lx, rx;
    unsigned char n;

    printf("Please enter a positive integer:");   scanf("%u", &x);
    printf("Please enter how many bits you want to shift:");   scanf("%hhu", &n);    
    /* funny specifier for input unsigned char and only work on C99 or later */
    /* if warning occurs during compiling, update to C99 or change to %c specifier(risk of overflow) */

    rx = rrotate(x, n);
    lx = lrotate(x, n);

    /* printf("bit count of unsigned:%d\n",int_bits()); */

    printf("Input integer displayed in binary:      ");    print_bits(x);
    printf("Input integer shift to left by %u bits:  ", n);    print_bits(lx);
    printf("Input integer shift to right by %u bits: ", n);    print_bits(rx);

    return(0);
}

/* Output: */
/* Please enter a positive integer:123123123 */
/* Please enter how many bits you want to shift:6 */
/* Input integer displayed in binary:      00000111010101101011010110110011 */
/* Input integer shift to left by 6 bits:  11010101101011010110110011000001 */
/* Input integer shift to right by 6 bits: 11001100000111010101101011010110 */
