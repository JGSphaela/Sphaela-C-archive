#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter the month rn in number:");    scanf("%d", &x);
    printf("x = %d\n", x);

    if (x >= 3 && x <= 5)
        puts("It's spring!\n");
    else if (x >= 6 && x <= 8)
        puts("It's summer!\n");
    else if (x >= 9 && x <= 11)
        puts("It's autumn!\n");
    else if (x >= 1 && x <= 12)
        puts("It's winter!\n");
    else
        puts("you are not living on earth, right?\n");

    return(0);
}
