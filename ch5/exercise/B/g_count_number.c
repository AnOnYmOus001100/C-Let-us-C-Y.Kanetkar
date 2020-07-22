/*
	Author: AnOnYmOus001100
	Date: 22/07/2020
	Description: To count the numbers entered as positive, negative or zero.
*/

#include<stdio.h>

int main()

{

	int num, count_pos = 0, count_neg = 0, count_zero = 0;

	while(1)
	{
		printf ("\nEnter  number(1100 to quit): ");
		scanf ("%d",&num);
		
		if (num == 1100)
			break;
		else if (num > 0)
			count_pos++;
		else if (num < 0)
			count_neg++;
		else
			count_zero++;
	}

	printf ("\n\n  Positive numbers: %d.\n  Negative numbers: %d.\n  Zero entered: %d.",count_pos,count_neg,count_zero);

	return 0;
}
