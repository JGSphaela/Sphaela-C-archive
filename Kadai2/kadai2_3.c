#include <stdio.h>

int main(void)
{
    int height, weight;
    double bmi, mheight;

    printf("Enter your height in centimeter: ");   scanf("%d", &height);
    printf("Enter your weight in kilogram: ");   scanf("%d", &weight);

    mheight = (double) height / 100;
    bmi= (double) weight / (mheight * mheight);

    printf("Your Body Mass Index (BMI) is %.1f.\n",bmi);

    return (0);
}

/* Output: */
/* Enter your height in centimeter: 170 */
/* Enter your weight in kilogram: 60 */
/* Your Body Mass Index (BMI) is 20.8. */

