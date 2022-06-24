#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, *p;

    p = &a;

    printf("*p = %d\n", *p);
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
    printf("p = %p\n", p);

    *p = b;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
    printf("p = %p\n", p);

    return(0);
}

/* Output: */
/* *p = 10 */
/* &a = 0x7ffdd17301b8 */
/* &b = 0x7ffdd17301bc */
/* p = 0x7ffdd17301b8 */
/* a = 20 */
/* *p = 20 */
/* &a = 0x7ffdd17301b8 */
/* &b = 0x7ffdd17301bc */
/* p = 0x7ffdd17301b8 */
