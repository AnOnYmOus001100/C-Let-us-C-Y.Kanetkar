/*

Author: AnOnYmOus001100
	Date: 19/07/2020 

Description: To use conditional operators to determine whether a year entered is leap year or not.
*/

#include<stdio.h>

int main()
{

	int year;

	printf ("Enter a year to check: ");
	scanf ("%d",&year);

 (year % 400 == 0) ? printf ("\nLeap year.") : (year % 100 == 0) ? printf ("\nNot Leap year.") : (year % 4 == 0) ? printf ("\nLeap year.") : printf ("\nNot Leap year.");

	return 0;
}
