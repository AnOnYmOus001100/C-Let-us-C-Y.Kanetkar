/* Calculate paper sizes of A0,A1,A2, ... A8. */
/* Author: AnOnYmOus001100  Date:10/06/2020 */

#include <stdio.h>
int main()
{
    int lA0, bA0, lA1, bA1, lA2, bA2, lA3, bA3, lA4, bA4, lA5, bA5, lA6, bA6, lA7, bA7, lA8, bA8;

    lA0 = 1189;
    bA0 = 841;
    lA1 = bA0;
    bA1 = lA0 / 2;
    lA2 = bA1;
    bA2 = lA1 / 2;
    lA3 = bA2;
    bA3 = lA2 / 2;
    lA4 = bA3;
    bA4 = lA3 / 2;
    lA5 = bA4;
    bA5 = lA4 / 2;
    lA6 = bA5;
    bA6 = lA5 / 2;
    lA7 = bA6;
    bA7 = lA6 / 2;
    lA8 = bA7;
    bA8 = lA7 / 2;

    printf("Size of A1 is %dx%dmm, A2 is %dx%dmm, A3 is %dx%dmm, A4 is %dx%dmm, A5 is %dx%dmm, A6 is %dx%dmm, A7 is %dx%dmm and A8 is %dx%dmm.",lA1,bA1,lA2,bA2,lA3,bA3,lA4,bA4,lA5,bA5,lA6,bA6,lA7,bA7,lA8,bA8);

    return 0;
}