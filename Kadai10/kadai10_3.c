#include <stdio.h>

/* read the length of string */
int str_length(const char s[])
{
    int length = 0;

    while (s[length]) {
        length++;
    }

    return length;
}

void lrotate_1char(char strin[], char strout[])
{
    int length = str_length(strin);

    strout[length - 1] = strin[0];

    for (int i = 0; i < length - 1; i++) {
        strout[i] = strin[i + 1];
    }

}

int main(void)
{
    char strin[40],strout[40];

    printf("Enter string:");
    scanf("%s", strin);

    lrotate_1char(strin, strout);

    printf("Result: %s\n", strout);

    return(0);
}

/* Output: */
/* Enter string:Ab!2sde3 */
/* Result: b!2sde3A */
    
