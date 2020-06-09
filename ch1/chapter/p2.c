/* Calculation of simple interest */
/* Author: AnOnYmOus001100 */

#include<stdio.h>
int main()
{
    int principal, num_of_years;
    float rate, simple_interest;

    printf("Enter values of principal, num_of_years and rate: ");
    scanf("%d %d %f",&principal, &num_of_years, &rate);

    simple_interest = principal * num_of_years * rate / 100;
    printf("%f\n",simple_interest);
    return 0;
}
