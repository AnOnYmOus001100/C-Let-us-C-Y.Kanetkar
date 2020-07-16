/* Author: AnOnYmOus001100 , Date: 12/07/2020 */
/* Check if the input year is leap year */

#include<stdio.h>

int main()
{

	int year;

	printf ("Enter a year: ");
	scanf ("%d",&year);

	if (year%400 == 0)
		printf ("\nLeap year.\n");

	else if (year%100 == 0)
		printf ("\n Not Leap year.\n");
	
	else if (year%4 == 0)
		printf ("\nLeap year.\n");

	else
		printf ("\nNot Leap year.\n");

	return 0;
}
