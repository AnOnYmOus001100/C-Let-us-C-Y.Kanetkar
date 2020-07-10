/* Author: AnOnYmOus001100 , Date: 10/07/2020 */
/* take two values of latitude (L1,L2) and longitude (G1,G2) in degrees of two places on the earth and output the distance D in nautical miles. */
// D = 3963 cosh (sin L1 sin L2 + cos L1 cos L2 * cos(G2-G1))

#include<stdio.h>
#include<math.h>

int main()
{
    float L1, L2, G1, G2, D;

    printf ("Enter the Latitude values (L1,L12): ");
    scanf ("%f %f",&L1,&L2);
    printf ("\nEnter the Longitude values (G1,G2): ");
    scanf ("%f %f",&G1,&G2);

    D = 3963 * cosh(sin(L1)*sin(L2) + cos(L1)*cos(L2)*cos(G2-G1));

    printf("\nThe distance between the points is: %f.",D);

return 0;
}