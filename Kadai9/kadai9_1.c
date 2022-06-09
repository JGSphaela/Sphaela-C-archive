#include <stdio.h>

#define diff1(x,y) ((x)-(y))
#define diff2(x,y) x-y

int main(void)
{
    int a, b, c, d, z1, z2;
    printf("Enter a=");   scanf("%d", &a);
    printf("Enter b=");   scanf("%d", &b);
    printf("Enter c=");   scanf("%d", &c);
    printf("Enter d=");   scanf("%d", &d);

    z1 = diff1(a, b) * diff1(c, d);
    z2 = diff2(a, b) * diff2(c, d);

    printf("diff1(a, b) * diff1(c, d) = %d\n", z1);
    printf("diff2(a, b) * diff2(c, d) = %d\n", z2);

    return(0);
}

/* Output: */
/* Enter a=1 */
/* Enter b=2 */
/* Enter c=3 */
/* Enter d=4 */
/* diff1(a, b) * diff1(c, d) = 1 */
/* diff2(a, b) * diff2(c, d) = -9 */
