#include <stdio.h>

int main(void)
{
    int score;

    printf("Enter your score: ");   scanf("%d", &score);
    
    if (score >= 90 && score <= 100)
        puts("Your grade is \"S\".\n");
    else if (score >= 80 && score <= 89)
        puts("Your grade is \"A\".\n");
    else if (score >= 70 && score <= 79)
        puts("Your grade is \"B\".\n");
    else if (score >= 60 && score <= 69)
        puts("Your grade is \"C\".\n");
    else if (score >= 0 && score <= 100)
        puts("Your grade is \"F\".\n");
    else
        puts("The score is out of range.\n");

    return (0);
}

/* Output: */

/* Enter your score: 85 */
/* Your grade is "A". */

/* Enter your score: 110 */
/* The score is out of range. */
