#include <stdio.h>
#include <stdlib.h>

int kuji(int x)
{
    int n = 0;

    do {
    n++;
    }while (rand() % x != 1);

    return n;
}

double kidai(int x)
{
    int n = kuji(x);
    double kidai =(double) 1/n;

    return kidai;
}

int main(void)
{
    srand(1000);

    printf("Times draw untill win when probability is 1%%:%d\n", kuji(100));
    printf("Expectation when probability is 1%%:%g\n", kidai(100));
    printf("Expectation when probability is 0.1%%:%g\n", kidai(1000));
    printf("Expectation when probability is 0.01%%:%g\n", kidai(10000));

    int res[100], i = 0, j = 0, tmp = 0;

    for (char h = 0; h < 100; h++) {
        res[h] = kuji(100);
    }

    /* this method uses the "Bubble Sort" algorithm */
    while (j < 100) {
        if (res[i] <= res[i + 1]) {
            i++;
            j++;
        }

        else {
            tmp = res[i];
            res[i] = res[i + 1];
            res[i + 1] = tmp;
            i++;
        }

        if (i == 99 && j < 99) {
            i = 0;
            j = 0;
        }

        else if (j == 99) {
            break;
        }
    }

    printf("5 most draw times at 1%% probability:\n");
    for (char h = 99; h > 94; h--) {
        printf("%d\n", res[h]);
    }

    return(0);
}

