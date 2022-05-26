#include <stdio.h>

int main(void)
{
    int radius;
    double pi, surface, volumn, d;

    printf("Enter the radius of the sphere: ");   scanf("%d", &radius);

    pi = 3.14159;
    d = (double) 4 / 3;
    surface = (double) 4 * pi * radius * radius;
    volumn = (double) d * pi * radius * radius * radius;

    printf("The surface area of the sphere is %.3f\nThe volumn of the sphere is %.3f\n",surface, volumn);

    return (0);
}

/* Output: */
/* Enter the radius of the sphere: 20 */
/* The surface area of the sphere is 5026.544 */
/* The volumn of the sphere is 33510.293 */
