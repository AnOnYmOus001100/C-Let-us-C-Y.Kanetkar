/* Author: AnOnYmOus001100 , Date: 17/06/2020 */
/* Find the area of the triangle given the three sides */

#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, s;
    double area, area2;

    printf("Enter the three sides: ");
    scanf ("%f %f %f",&a,&b,&c);

    s = a + b + c / 2;  //calculating semi perimeter
    area2 = s * (s-a) * (s-b) * (s-c);
    area = sqrt(area2); //calculating area

    printf ("\nThe area of the triangle is: %lf",area);

    return 0;
//link using -l as : gcc -oc c.c -lm
}