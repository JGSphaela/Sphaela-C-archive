#include <stdio.h>

void sort3(int *n1, int *n2, int *n3)
{
    int arr[] = {*n1, *n2, *n3}, i = 0, j = 0, tmp;

    /* this method uses the "Bubble Sort" algorithm */
    while (j < 3) {
        if (arr[i] < arr[i + 1]) {
            i++;
            j++;
        }
        else {
            tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
            i++;
        }

        if (i == 2 && j < 2) {
            i = 0;
            j = 0;
        }

        else if (i == 2 && j ==2) {
            break;
        }
    }

    *n1=arr[0];
    *n2=arr[1];    
    *n3=arr[2];

}

int main(void)
{
    int n1, n2, n3;

    printf("Enter n1:");  scanf("%d", &n1);
    printf("Enter n2:");  scanf("%d", &n2);
    printf("Enter n3:");  scanf("%d", &n3);

    sort3(&n1, &n2, &n3);

    printf("after sorting:\n");
    printf("n1=%d\n", n1);
    printf("n2=%d\n", n2);
    printf("n3=%d\n", n3);

    return(0);
}

/* Output: */
/* Enter n1:12 */
/* Enter n2:2 */
/* Enter n3:23 */
/* after sorting: */
/* n1=2 */
/* n2=12 */
/* n3=23 */
