/* Author: AnOnYmOus001100 , Date: 16/07/2020 */
/* To check if a given point (x,y) lies on x, y or on the origin. */

#include<stdio.h>

int main()
{
	int x,y;

	printf ("Enter the point coordinates (x y): ");
	scanf ("%d %d",&x,&y);

	if (x == 0 && y == 0)
		printf ("\nPoint lies on Origin.");
	else if (y == 0)
		printf ("\nPoint lies on X-axis.");
	else if (x == 0)
		printf ("\nPoint lies on Y-axis.");
	else
		printf ("\nPoint is not on X-axis, Y-axis or Origin.");

	return 0;
}
