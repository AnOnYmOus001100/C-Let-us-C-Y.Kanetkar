/* Author: AnOnYmOus001100 , Date: 16/07/2020 */
/* Given the coordinates (x,y) center of a circle and its radius as input, determine whether a point lies inside,on or outside of the circle. */

#include<stdio.h>
#include<math.h>

int main()
{
	int cx, cy, px, py, rad2, res;
	float radius;

	printf ("Enter the circle's center coordinates (x y): ");
	scanf ("%d %d",&cx,&cy);

	printf ("\nEnter the circle's radius: ");
	scanf ("%f", &radius);

	printf ("\nEnter the point coordinates (x y): ");
	scanf ("%d %d",&px,&py);

	res = pow((px - cx),2) + pow((py - cy),2);
	rad2 = pow(radius,2);
	
	if (res < rad2)
		printf ("\nPoint lies inside circle.");
	else if (res == rad2)
		printf ("\nPoint lies on the circle.");
	else
		printf ("\nPoint lies outside circle.");

	return 0;
}
