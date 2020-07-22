/*
	Author: AnOnYmOus001100
	Date: 21/07/2020 
	Description: Find one number raised to the power of another, given two numbers as input.
*/

// using loops to find power

#include<stdio.h>

int main()
{

	int num_base, num_power, result = 1;

	printf ("Enter the base  followed by the power: ");
	scanf ("%d %d",&num_base,&num_power);

	for (int i = 0; i < num_power; i++)
		result = result * num_base;

	printf ("\nThe result is: %d",result);

	return 0;
}
