#include <stdio.h>
int main(void)
{
    int x, y; /* replaced ';' with ',' */
    int add, mul, sub, div, mod; /* added the missing 'mul' */

    printf("Enter two integers and press Enter key: ");
    scanf("%d %d", &x, &y); /* added the missing '&' */
    printf("x = %d\ny = %d\n", x, y); /* added ',' between x and y */

    add = x + y; /* replaced ':' with ';' */
    sub = x - y;
    mul = x * y;
    div = x / y;
    mod = x % y;

    printf("x + y = %d\n", add);
    printf("x - y = %d\n", sub);
    printf("x * y = %d\n", mul);
    printf("x / y = %d ... %d\n", div, mod);

    return (0); /* added the missing ';' */
}

/* Output: */
/* Enter two integers and press Enter key: 32 17 */
/* x = 32 */
/* y = 17 */
/* x + y = 49 */
/* x - y = 15 */
/* x * y = 544 */
/* x / y = 1 ... 15 */
