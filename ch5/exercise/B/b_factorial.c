/*
	Author: AnOnYmOus001100
	Date: 21/07/2020 
	Description: Find the factorial of a number given as input.
*/

#include<stdio.h>

int main()
{
	int num, i , fact = 1;

	printf ("Enter the number to find factorial: ");
	scanf ("%d",&num);

	for (i  = num; i > 0; i--)
	   fact = fact * i;

	printf ("\nFactorial of %d is %d.",num,fact);

	return 0;
}
