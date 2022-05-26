#include <stdio.h>

int main(void)
{
    int i, j, k, x, y;
    int A[3][3], B[3][3];
    int C[3][3], D[3][3];

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("A(%d,%d):", i+1, j+1);    scanf("%d", &A[i][j]);

        }

    }

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("B(%d,%d):", i+1, j+1);    scanf("%d", &B[i][j]);

        }

    }

    printf("A=\n");
    for (i=0; i<3; i++) {
        printf("| ");
        for (j=0; j<3; j++) {
            printf("%d ", A[i][j]);

        }
        printf("|\n");

    }

    printf("B=\n");
    for (i=0; i<3; i++) {
        printf("| ");
        for (j=0; j<3; j++) {
            printf("%d ", B[i][j]);

        }
        printf("|\n");

    }

    /* add */
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            C[i][j] = A[i][j] + B[i][j];

        }

    }

    /* multiply */
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            y = 0;
            for (k=0; k<3; k++) {
                x = A[i][k] * B[k][j];
                y += x;

            }
            D[i][j] = y;

        }

    }

    printf("A+B=\n");
    for (i=0; i<3; i++) {
        printf("| ");
        for (j=0; j<3; j++) {
            printf("%d ", C[i][j]);

        }
        printf("|\n");

    }

    printf("A*B=\n");
    for (i=0; i<3; i++) {
        printf("| ");
        for (j=0; j<3; j++) {
            printf("%d ", D[i][j]);

        }
        printf("|\n");

    }

    return(0);
}

/* Output: */
/* A(1,1):1 */
/* A(1,2):2 */
/* A(1,3):3 */
/* A(2,1):3 */
/* A(2,2):2 */
/* A(2,3):1 */
/* A(3,1):4 */
/* A(3,2):5 */
/* A(3,3):6 */
/* B(1,1):3 */
/* B(1,2):2 */
/* B(1,3):4 */
/* B(2,1):5 */
/* B(2,2):6 */
/* B(2,3):7 */
/* B(3,1):8 */
/* B(3,2):5 */
/* B(3,3):4 */
/* A= */
/* | 1 2 3 | */
/* | 3 2 1 | */
/* | 4 5 6 | */
/* B= */
/* | 3 2 4 | */
/* | 5 6 7 | */
/* | 8 5 4 | */
/* A+B= */
/* | 4 4 7 | */
/* | 8 8 8 | */
/* | 12 10 10 | */
/* A*B= */
/* | 37 29 30 | */
/* | 27 23 30 | */
/* | 85 68 75 | */
