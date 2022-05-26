#include <stdio.h>

int main(void)
{
    int month;

    printf("Enter a number for month: ");    scanf("%d", &month);

    switch (month)  {
        case 3 :
        case 4 :
        case 5 :
            puts("It is spring.\n");    break;
        case 6 :
        case 7 :
        case 8 :
            puts("It is summer.\n");    break;
        case 9 : 
        case 10 : 
        case 11 : 
            puts("It is autumn.\n");    break;
        case 12 :
        case 1 :
        case 2 :
            puts("It is winter.\n");    break;
        default:
            puts("It is not available for months!\n");  break;
    }

    return (0);
}

/* Output: */

/* Enter a number for month: 3 */
/* It is spring. */

/* Enter a number for month: 15 */
/* It is not available for months! */
