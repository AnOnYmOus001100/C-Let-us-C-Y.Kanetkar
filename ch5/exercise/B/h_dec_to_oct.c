/*
	Author: AnOnYmOus001100
	Date: 22/07/2020
	Description: Convert Decimal to Ocatal.
*/

#include<stdio.h>

int main()
{

	int dec, oct, rev = 0, rem, num, q, temp;

	printf ("Enter an integer:");
	scanf ("%d",&dec);

	num = dec;	

	if (num > 7)
	{
		//continuous diving number by 8 until 0
		while(num != 0)
		{
			// continuous divide by 8
			q = num / 8;
			rem = num % 8;
			num = q;
			rev = rev*10 + rem;
		}

		temp = rev;
		rev = 0;

		// reversing the number
		while (temp != 0)
		{
			//reversing temp
			rem = temp % 10;
			rev = rev*10 + rem;
			temp /= 10;
		}
	
		// octal value
		oct = rev;
	}

	else
	  oct = dec;

	printf ("\nOctal form of %d is %d",dec,oct);

	return 0;
}
