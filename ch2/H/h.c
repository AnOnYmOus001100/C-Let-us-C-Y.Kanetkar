/* Author: AnOnYmOus001100 , Date: 10/07/2020 */
/* To interchange the values of two input numbers C and D. */

#include<stdio.h>

int main()
{
    float C,D, temp;

    printf ("Enter two numbers: ");
    scanf ("%f %f",&C,&D);

    temp = D;
    D = C;
    C = temp;

    printf ("\nThe numbers after interchanging are: %f %f",C ,D);

    return 0;
}