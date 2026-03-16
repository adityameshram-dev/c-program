/* Ramesh’s basic salary is input through the keyboard. His dearness allowance
is 40% of basic salary, and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary. */

#include <stdio.h>

int main()
{

    float BS;
    printf("Enter basics salary: ");
    scanf("%f", &BS);
    float DA = (BS * 40) / 100;
    float HRA = (BS * 20) / 100;
    float GS = BS + DA + HRA;
    printf("Gross Salary is: %.2f", GS);

    return 0;
}