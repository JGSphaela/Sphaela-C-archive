#include <stdio.h>
#include <stdlib.h>

void del_alpha(char *str)
{
    unsigned r = 0, w = 0;

    while (*(str + r)) {
        if ((*(str + r) >= 'a' && *(str + r) <= 'z') || (*(str + r) >= 'A' && *(str + r) <= 'Z')) {
        }
        else {
            *(str + w) = *(str + r);
            w++;
        }
        r++;
    }
    *(str + w) = '\0';
}

int main(void)
{
    char *str = (char *)malloc(40*sizeof(char));

    printf("Enter string:");
    scanf("%s", str);

    del_alpha(str);

    printf("Output:%s\n", str);

    free(str);

    return(0);
}

/* Output: */
/* Enter string:A24bs_3sa+=12YUn */
/* Output:24_3+=12 */
