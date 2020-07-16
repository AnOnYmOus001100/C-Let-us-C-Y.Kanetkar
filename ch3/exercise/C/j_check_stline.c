/* Author: AnOnYmOus001100 , Date: 16/07/2020 */
/* To check if the three points input through the keyboard fall on a straight line */

#include<stdio.h>

int main()
{
	int x1, x2, x3, y1, y2, y3, half_det;

	printf ("Enter the points:(x,y): ");
	scanf ("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

	half_det = x1*(y1 - y3) + x2*(y2 - y1) + x3*(y3 - y2);
	
	if (half_det == 0)
		printf ("\nAll three points falls on the same line.");
	else
		printf ("\nNo, points doesn't falls on the same line.");

	return 0;
}
