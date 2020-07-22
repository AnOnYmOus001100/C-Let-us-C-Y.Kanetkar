/*
	Author: AnOnYmOus001100
	Date: 22/07/2020
	Description: To list all armstrong numbers between 1 and 500. 
*/

#include<stdio.h>

int main ()
{
	int i, num, rem, result;

	printf (" List of armstrong numbers from 1 to 500: \n");
	
	// loop to iterate from 1 to 500
	for (i=1; i <= 500; i++)
	 {

	    // condition for armstrong
	    num = i;
	    // cubing and adding
	    while (num != 0)
	     {
		// getting last digit of num
	   	rem = num % 10;
		result += rem * rem * rem;
		
		// removing last digit from num
		num /= 10;
	     }
	

	// printf if number is armstrong
	 if (result == i)
		printf (" %d ",i);
	result = 0; // resetting result
	}

	return 0;
}
