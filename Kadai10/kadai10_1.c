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

/* turn all letter after n letter into 0 */
void null_string(char s[], int n)
{
    int length = str_length(s);

    for (int i = n; i < length; i++) {
        s[i] = 0;
    }

}

int main(void)
{
    char str[40];
    int n, len;

    printf("Enter string:");
    scanf("%s", str);

    printf("Enter integer:");
    scanf("%d", &n);

    null_string(str, n);

    printf("Result: %s\n", str);

    return(0);
}

/* Output: */
/* Enter string:abcdefghijk */
/* Enter integer:5 */
/* Result: abcde */
