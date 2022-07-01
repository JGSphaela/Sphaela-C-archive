#include <stdio.h>

void sum_ave(int *arr, int *sum, double *avg)
{
    *sum = 0;
    *avg = 0;

    /* using while is bad cuz it will exit in case of the value of the array is 0 */
    for (char i = 0; i < 5; i++) {
        *sum += arr[i];
    }

    *avg = (double) *sum / 5;

}

int main(void)
{
    int arr[5], sum;
    double avg;

    for (char i = 0; i < 5; i++) {
        printf("Enter the score of %dth person:", i + 1);
        scanf("%d", &arr[i]);
    }

    sum_ave(arr, &sum, &avg);

    printf("sum of all scores is:%d\n", sum);
    printf("average of all scores is:%g\n", avg);

    return(0);
}

/* Output: */
/* Enter the score of 1th person:10 */
/* Enter the score of 2th person:20 */
/* Enter the score of 3th person:30 */
/* Enter the score of 4th person:40 */
/* Enter the score of 5th person:50 */
/* sum of all scores is:150 */
/* average of all scores is:30 */
