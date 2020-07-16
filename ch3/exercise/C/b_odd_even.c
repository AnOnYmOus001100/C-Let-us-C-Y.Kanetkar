/* Author: AnOnYmOus001100 , Date: 12/07/2020 */
/* To find whether input number(integer) is even of odd */

#include<stdio.h>

int main()
{
	int n;
	
	printf ("Enter a number: ");
	scanf ("%d",&n);

	if (n%2 == 0)
		printf ("\nEven number\n");
	else
		printf ("\nOdd number\n");

	return 0;
}
