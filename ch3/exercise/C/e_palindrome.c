/* Author: AnOnYmOus001100 , Date: 13/07/2020 */
/* check if a five digit number entered through the keyboard when reversed is equal to the original number */

#include<stdio.h>

int main()
{
	int num ,reverse, ori_num;
	
	printf ("Enter the five digit number: ");
	scanf ("%d",&num);
	ori_num = num;

	// reversing the number
	reverse = num%10;
	num = num/10;	

	reverse =reverse*10 +  num%10;
	num = num/10;

	reverse = reverse*10 + num%10;
	num = num/10;

	reverse = reverse*10 + num%10;
	num = num/10;
	
	reverse = reverse*10 + num%10;
	printf ("%d",reverse);

	//checking the original and reversed number
	if (reverse == ori_num)
		printf ("\nNumbers are equal.\n");
	else
		printf ("\nNumbers are unequal.\n");

	return 0;
}
