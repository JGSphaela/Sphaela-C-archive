#include <stdio.h>

int main(void)
{
    int num[5]={1,2,3,4,5};

    for (char i = 0; i < 5; i++) {
        printf("num[%d] = %d, %p\n", i, *(num + i), (num + i));
    }

    return(0);
}

/* Output: */
/* num[0] = 1, 0x7ffd789bba70 */
/* num[1] = 2, 0x7ffd789bba74 */
/* num[2] = 3, 0x7ffd789bba78 */
/* num[3] = 4, 0x7ffd789bba7c */
/* num[4] = 5, 0x7ffd789bba80 */
