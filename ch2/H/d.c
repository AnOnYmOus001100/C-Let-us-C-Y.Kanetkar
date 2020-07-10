/* Author: AnOnYmOus001100 , Date: 17/06/2020 */

#include <stdio.h>
#include <math.h>
int main ()
{
    float x,y,r,theta;

    printf ("Enter the Cartesian co-ordinates(x,y): ");
    scanf ("%f %f",&x,&y);

    r = sqrt(x*x + y*y);
    theta = tanh(y/x);

    printf ("\nThe Polar co-ordinates are: r = %f and theta = %f degree.",r,theta);

    return 0;

    //link using -lm, as: gcc -od d.c -lm
}