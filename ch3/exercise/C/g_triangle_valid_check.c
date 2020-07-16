/* Author: AnOnYmOus001100 , Date: 14/07/2020 */
/* To check if the input angles form a valid triangle */

#include<stdio.h>

int main()
{
	int a1, a2, a3;
	
	printf ("Enter the three angles: ");
	scanf ("%d%d%d",&a1,&a2,&a3);

	if (a1+a2+a3 == 180)
		printf ("\nTriangle is valid.");
	else
		printf ("\nTriangle is invalid.");

	return 0;
}
