/* Author: AnOnYmOus001100 , Date: 13/07/2020 */
/* find the youngest(smallest) of three entered ages(numbers) */

#include<stdio.h>

int main()
{
	int age1, age2, age3;

	printf ("Enter three ages(Ram,Shyam and Ajay) or numbers: ");
	scanf("%d %d %d",&age1, &age2, &age3);

	if (age1<age2 && age1<age3)
		printf ("\nRam is youngest.");
	else
	   {
		if (age2<age1 && age2<age3)
			printf ("\nShayam is the youngest.");
		else
			printf ("\nAjay is the youngest.");
	   }

	return 0;
}
