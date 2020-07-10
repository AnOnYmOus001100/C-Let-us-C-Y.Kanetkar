/* Author: AnOnYmOus001100 , Date: 10/07/2020 */
/* calculate chill factor, given temperature and wind velocity. */
// wcf = 35.74 + 0.6215t + (0.4275t - 35.75)*v^0.16

#include<stdio.h>
#include<math.h>

int main()
{
    float t, v, wcf;

    printf ("Enter the temperature and wind velocity: ");
    scanf ("%f %f",&t,&v);

    wcf = 35.74 + 0.6215*t + (0.4275* t - 35.75) * pow(v,0.16);

    printf ("\nThe wind chill factor is %f.",wcf);

    return 0;
    
    //link with -lm, as: gcc -of f.c -lm
}
