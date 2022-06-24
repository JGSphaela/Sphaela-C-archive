#include <stdio.h>

void sum_ave(int *arr, int *sum, double *avg)
{
    int i = 0;

    *sum = 0;
    *avg = 0;

    while (arr[i]) {
        *sum += arr[i];
        i++;
    }

    *avg = (double) *sum / i;

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
