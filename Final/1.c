#include <stdio.h>

/* Print out *p in binary */
void print_bin(const unsigned char *p)
{
    for (int i = 7; i >= 0; i--) {
        putchar(((*p >> i) & 1U) ? '1' : '0');
    }
    putchar('\n');
}

void set_bit(unsigned char *p, unsigned int bit)
{
    *p |= (1 << bit);
}

void unset_bit(unsigned char *p, unsigned int bit)
{
    *p &= ~(1 << bit);
}

void flood_fill(unsigned char buf[], unsigned int length, int byte, int bit)
{
    if ( !(byte >= 0 && byte <= (length - 1)) || !(bit >= 0 && bit <= 7) || buf[byte] >> bit & 1U) {
        return;
    }

    set_bit(&buf[byte], bit);

    flood_fill(buf, length, byte - 1, bit);
    flood_fill(buf, length, byte + 1, bit);
    flood_fill(buf, length, byte, bit - 1);
    flood_fill(buf, length, byte, bit + 1);

}
int main(void)
{

    unsigned char buf[8];

    printf("uninitialized array:\n");
    for (char i = 0; i < 8; i++) {
        print_bin(&buf[i]);
    }

    buf[0] = buf[5] = buf[6] = 0;
    buf[1] = buf[4] = 0x66;
    buf[2] = buf[3] = 0x99;
    buf[7] = 1;

    printf("initialized array:\n");
    for (char i = 0; i < 8; i++) {
        print_bin(&buf[i]);
    }

    unset_bit(&buf[3], 3);
    unset_bit(&buf[3], 4);
    unset_bit(&buf[4], 2);
    unset_bit(&buf[4], 5);
    set_bit(&buf[5], 2);
    set_bit(&buf[5], 5);
    set_bit(&buf[6], 3);
    set_bit(&buf[6], 4);

    printf("modified array:\n");
    for (char i = 0; i < 8; i++) {
        print_bin(&buf[i]);
    }

    unsigned int length = 8;
    int byte = 4, bit = 4;
    flood_fill(buf, length, byte, bit);

    printf("after flood_fill:\n");
    for (char i = 0; i < 8; i++) {
        print_bin(&buf[i]);
    }

    return(0);
}


