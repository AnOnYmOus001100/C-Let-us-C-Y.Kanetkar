/* Author: AnOnYmOus001100 , Date: 14/07/2020 */
/* To check if the area of the rectangle is greater than the perimeter, when breadth and length is given as input. */

#include<stdio.h>

int main()
{
	float length, breadth, area, perimeter;

	printf ("Enter length and breadth of rectangle: ");
	scanf ("%f %f",&length,&breadth);

	area = length*breadth;
	perimeter = 2*(length+breadth);
	
	if (area > perimeter)
		printf ("\nArea is greater than perimeter.");
	else
		printf ("\nPerimeter is greter than area.");

	return 0;
}
