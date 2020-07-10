/* Author: AnOnYmOus001100 , Date: 10/07/2020 */
/* print all the trigonometric ratios given its angle */

#include<stdio.h>
#include<math.h>

int main()
{
    float angle;

    printf ("Enter the angle: ");
    scanf ("%f",&angle);

    printf ("\nsin: %f\n cos: %f\n tan: %f\n sinh: %f\n cosh: %f\n tanh: %f\n",sin(angle),cos(angle),tan(angle),sinh(angle),cosh(angle),tanh(angle));

    return 0;
    //link with -lm as: gcc -og g.c -lm
}