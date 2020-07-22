/*
	Author: AnOnYmOus001100
	Date: 19/07/2020 
	Description: Rewrite code of ch 4, exercise E, number e using conditional operators
*/

#include<stdio.h>

int main()
{
	float sal;

	printf ("Enter the salary: ");
	scanf ("%f",&sal);

	(sal >= 25000 && sal <= 40000) ? printf ("Manager\n") : (sal >= 15000 && sal < 25000) ? printf ("Accountant\n") : printf ("Clerk\n");

	return 0;
}
