/*
	Author: AnOnYmOus001100
	Date: 21/07/2020 
	Description: To calculate overtime pay of 10 employees, overtime is paid at 12.00 unit per hour for every hour workded above 40 hours. Assume 
	employees don't work for fractional part of an hour. 
*/

#include<stdio.h>

int main()
{

	int hours_worked, extra_hours, overtime_pay = 0;

	for (int i=1; i <= 10; i++)
	   {
	     printf ("Enter hours worked of employee %d : ",i);
		 scanf ("%d",&hours_worked);

	     if (hours_worked > 40)
		extra_hours = hours_worked - 40;

	     overtime_pay = extra_hours * 12.00;

	     printf ("Overtime pay of employee %d is %d unit.:",i,overtime_pay);
	   }

	return 0;
}
