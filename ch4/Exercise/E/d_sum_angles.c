/*
	Author: AnOnYmOus001100
	Date: 19/07/2020 
	Description: Check if the sum of sine and cosine is equal to 1 of an angle.
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int angle;

	printf ("Enter an angle:");
	scanf ("%d",&angle);

	int sum = pow(sin(angle),2) + pow(cos(angle),2);

	if (sum == 1)
		printf ("Yes,  sin(%d)^2 + cos(%d)^2 = 1.",angle, angle);
	else
		printf ("No, sum(%d)^2 + cos(%d)^2 = %d.",angle,angle,sum);

	return 0;
}
