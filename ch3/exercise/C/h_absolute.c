/* Author: AnOnYmOus001100 , Date: 14/07/2020 */
/* To find the absolute of a number given as input */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;

	printf ("Enter a number: ");
	scanf ("%d",&num);

	printf ("\nThe absolute of %d is %d\n.",num,abs(num));

	return 0;
}
