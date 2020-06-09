/* Convert distance input in km to meters, feet, inches and centimetres */
/* Author: AnOnYmOus001100  Date:10/06/2020 */


#include<stdio.h>
int main()
{
    float km, m, ft, in, cm;

    printf("Enter the distance in km:");
    scanf("%f",&km);

    m = km * 1000;
    cm = m * 100;
    ft = m * 0.3048;
    in = m * 39.37008;

    printf("\nThe distance between the two cities is %.2fkm or %.2fm or %.2ffeet or %.2finches %.2fcm.",km,m,ft,in,cm);

    return 0;
}