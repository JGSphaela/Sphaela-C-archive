#include <stdio.h>

int fac(int n)
{
    if (n > 0) {
    return n * fac(n - 1);
    }
    else {
    return 1;
    }
}

int combination(int n, int r)
{
    if (n > 0 && r > 1) {
    return (combination(n-1, r-1) + combination(n-1, r));
    }
    else if (n > 0 && r == 1) {
    return n;
    }
    else {
    return 0;
    }

}

int cob(int n, int r)
{
    if (n == 0 && r == 0) {
    return 1;
    }
    else {
    return fac(n)/(fac(r)*fac(n-r));
    }
}

int main(void)
{
    int n, r, res1, res2;

    printf("Enter n = ");   scanf("%d", &n);
    printf("Enter r = ");   scanf("%d", &r);
   
    res1 = combination(n, r);
    res2 = cob(n, r);

    printf("Calculate using recursion: %d\n", res1);
    printf("Calculate without using recursion: %d\n", res2);

    return(0);
}

/* Output: */
/* Enter n = 5 */
/* Enter r = 3 */
/* Calculate using recursion: 10 */
/* Calculate without using recursion: 10 */
