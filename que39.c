// Write a program showing use of any three function of <math.h> header file.

#include <stdio.h>
#include <math.h>

int main()
{
    float num = 16;
    float power, root, round;

    root = sqrt(num);
    printf("Square root of %.0f = %.2f\n", num, root);

    power = pow(2,3);
    printf("2 raised to power 3 = %.0f\n", power);

    round = ceil(4.3);
    printf("Ceiling value of 4.3 = %.0f\n", round);

    return 0;
}