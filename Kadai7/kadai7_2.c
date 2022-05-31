#include <stdio.h>

int main(void)
{
    int x = 1;
    char A[5] = {10,20,30,40,50}, a;
    a = sizeof(A) / sizeof(A[0]);

    for (char i = 0; i < a; i++) {
        x *= A[i]; 

    }

    printf("The size of the array is:%d\n", a);
    printf("Result of multiplication is:%d\n", x);

    return(0);
}

/* Output: */
/* The size of the array is:5 */
/* Result of multiplication is:12000000 */
