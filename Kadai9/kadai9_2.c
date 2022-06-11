#include <stdio.h>

enum month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

enum month selection(void) /* name changed to selection */
{
    int tmp;
    do {
        printf("Please enter month as number:");
        scanf("%d", &tmp);
        --tmp;
    }while (tmp < Jan || tmp > Dec);

    return tmp;
}

int main(void)
{
    enum month selected;

    switch (selected = selection()) {
        case Jan:
        case Mar:
        case May:
        case Jul:
        case Aug:
        case Oct:
        case Dec: printf("There are 31 days in this month!\n"); break;
        case Apr:
        case Jun:
        case Sep:
        case Nov: printf("There are 30 days in this month!\n"); break;
        case Feb: printf("There are 28 days in this month!\n"); break;

    }

    return(0);
}

/* Output: */
/* Please enter month as number:2 */
/* There are 28 days in this month! */

/* I didn't encountered error using the name select(which has already been defined in stdio.h) in my environment */
/* But changed it to other name to avoid compiler error */
