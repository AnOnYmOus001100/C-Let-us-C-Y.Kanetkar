/* Author: AnOnYmOus001100 , Date: 12/07/2020 */
/* To find whether a seller has made profit or loss given cost price and selling price as input */

#include<stdio.h>

int main()
{

	float cp, sp;

	printf ("Enter the cost price and sell price: ");
	scanf ("%f %f",&cp,&sp);

	if (sp>cp)
		printf ("\nProfit\n");
	else
		printf ("\nLoss\n");

	return 0;
}
