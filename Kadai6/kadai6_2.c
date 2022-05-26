#include <stdio.h>

void add(const int A[3][3], const int B[3][3], int C[3][3])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void mul(const int A[3][3], const int B[3][3], int D[3][3])
{
    int x, y;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            y = 0;
            for (int k= 0; k < 3; k++) {
                x = A[i][k] * B[k][j];
                y += x;
            }
            D[i][j] = y;
        }
    }
}

int main(void)
{
    int i, j;
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

    add(A, B, C);
    mul(A, B, D);

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
/* A(2,1):4 */ 
/* A(2,2):5 */
/* A(2,3):6 */
/* A(3,1):7 */
/* A(3,2):8 */
/* A(3,3):9 */
/* B(1,1):1 */
/* B(1,2):2 */
/* B(1,3):3 */
/* B(2,1):4 */
/* B(2,2):5 */
/* B(2,3):6 */
/* B(3,1):7 */
/* B(3,2):8 */
/* B(3,3):9 */
/* A+B= */
/* | 2 4 6 | */
/* | 8 10 12 | */
/* | 14 16 18 | */
/* A*B= */
/* | 30 36 42 | */
/* | 66 81 96 | */
/* | 102 126 150 | */
