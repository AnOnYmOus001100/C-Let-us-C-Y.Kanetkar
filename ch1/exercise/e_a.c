/* Calculate gross salary where the basic salary is taken as input and given d.a = 40% of basic salary and house rent = 20% of basic salary */
/* Author: AnOnYmOus001100  Date:10/06/2020 */

#include <stdio.h>
int main()
{
    float basic_salary, dearness_allowance, gross_salary, house_rent;

    printf("Enter the basic salary:");
    scanf("%f",&basic_salary);

    dearness_allowance = basic_salary * 0.4;
    house_rent = basic_salary * 0.2;

    /*calculating gross salary*/
    gross_salary = basic_salary + dearness_allowance + house_rent;

    printf("\nGross salary is %f",gross_salary);

    return 0;
}
