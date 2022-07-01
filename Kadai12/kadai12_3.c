#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void r_str(int n, char *str)
{
    int i = 0, tmp = 0;
    srand(time(NULL));

    /* This method is quite inefficient but it's fun to code! */
    while (i < n) {
        do {
            tmp = rand() % 'z'; /* get a number from 0 to 'z'(122) */
        } while (!( (tmp >= 'A' && tmp <= 'Z') || (tmp >= 'a' && tmp <= 'z'))); /* check if the number is in range */
        str[i] = tmp; /* write the number to array */
        i++;
    }

    str[i] = '\0';

}

int main(void)
{
    int n = 0;

    printf("Enter length of the string:");
    scanf("%d", &n);

    char str[n];

    r_str(n, str);

    printf("String:%s\n", str);

    return(0);
}

/* Output: */
/* Enter length of the string:50 */
/* String:YCFxhYiUtZVKKGXykomAroEtksrmloSgkMKafvsJAiEkSQJBnr */
