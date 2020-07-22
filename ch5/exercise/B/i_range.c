/*
	Author: AnOnYmOus001100
	Date: 22/07/2020
	Description: Find the set of range of numbers entered.
*/

#include<stdio.h>

int main()
{

	int num, min = 0, max = 0;

	while (1)
	{
		printf ("Enter a set of numbers:(1100 to quit): ");
		scanf ("%d", &num);
		
		if (num == 1100)
			break;

		// finding minimum from set
		if (num < min)
			min = num;
		
		// findign maximum from set
		if (num > max)
			max = num;
	}

	printf ("\n Difference between max: %d and min: %d is %d.\n",max,min,max-min);
	
	for (int i=min; i<=max; i++)
		printf (" %d ",i);

	return 0;
}
