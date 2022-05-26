#include <stdio.h>

int main(void)
{
    int retry;

    do {
        int no;
        printf("Enter an integer:");    scanf("%d", &no);

        if (no % 2) {
            puts("Your input integer is odd.");
        }
        else {
            puts("Your input integer is even.");
        }
        printf("Enter again? Yes:0 No:1 :");    scanf("%d", &retry);
    }while (retry == 0);
    printf("Exit\n");

}
