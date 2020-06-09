/* Calculation of Simple interest */
/* Author: AnOnYmOus001100  Date:09/06/2020 */

#include <stdio.h>

int main()
{
    int principal, number_of_years;
    float rate, simple_interst;

    principal = 1000;
    number_of_years = 3;
    rate = 8.5;

    /* formula for simple interest */
    simple_interst = principal * number_of_years * rate / 100;
    printf("%f\n",simple_interst);
    return 0;

}